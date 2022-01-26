#include <iostream>
using namespace std;
int main() {
    
    int score = 94;
    int * pScore = &score;

    cout << "*pScore = " << *pScore << endl;
    cout << "pScore  = " << pScore << endl;
    cout << "&score  = " << &score << endl;
    cout << "&pScore = " << &pScore << endl;
    cout << "pScore  = " << pScore << endl;
    cout << "&score  = " << &score << endl;

    cout << "sizeof pScore = " << sizeof(pScore) << endl;
    return 0;
}