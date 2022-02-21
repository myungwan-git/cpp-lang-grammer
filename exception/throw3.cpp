#include <iostream>
using namespace std;

int plusx(int x, int y);

int main() {

    int x, y;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    try
    {
        plusx(x, y);
    }catch(int x) {
        cout << "main catch ! " << endl;
    }
    
    return 0;
}

int plusx(int x, int y) {
    try
    {
        if(x+y == 10) {
            throw 0;
        }
        
    }
    catch(int x)
    {
        throw;
        // cout << "plus 함수 내부 catch. plus결과 10." << endl;
    }
    return x+y;
}