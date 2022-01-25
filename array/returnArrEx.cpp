#include <iostream>
#include <string>
using namespace std;

string retStr()
{
    string str = "Hello future!";
    return str;
}
string retStrArr(string arr[])
{
    string retArr[2] = {"Hello", "Time"};
    arr[0] = retArr[0];
    return arr[0];
}

int main() {
    string result;
    result = retStr();
    cout << "result = " << result << endl;

    string arr[2] = {"HI", "Hoo"};
    retStrArr(arr);

    cout << "arr[0] = " << arr[0] << endl;
    

    return 0;
}