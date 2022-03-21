#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

    char ch[20] = {'a','b','c'};
    char ch2[64] = {'1','2','3','4','5'};
    
    cout <<  ch2 << endl;
    cout << ch2+1 << "and " << endl;
    


    sprintf(ch, "%.1s", ch2);

    return 0;
}