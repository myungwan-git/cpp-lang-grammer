#include <iostream>
using namespace std;

int main() {

    int ex = 15;
    int exam = 50;
    const int exCon = 15;
    // int * pExCon = &exCon;       // 컴파일 에러. 변수의 주소는 저장가능하지만 상수의 주소는 저장이 불가능하다.
    
    const int * pEx = &ex;
    ex = 25;
    cout << "ex = " << ex << endl;
    cout << "pEx = " << pEx << endl;
    // *pEx = 35;                   // 컴파일 에러. 포인터변수를 상수로 선언하여 변경이 불가능하다.
    
    int * pExam = &exam;
    cout << "pExam = " << pExam << endl;
    pExam = &ex;
    cout << "pExam = " << pExam << endl;

    const int *pExam2 = &exam;
    cout << "pExam2 = " << pExam2 << endl;
    pExam2 = &ex;
    cout << "pExam2 = " << pExam2 << endl << endl;

    const int * pExam3 = &exCon;
    cout << "pExam3 = " << pExam3 << endl;
    pExam3 = &ex;
    cout << "pExam3 = " << pExam3 << endl << endl;

    //위와 다르게 pExam4 자체에 const를 주었다. 그러면 가르키는 주소값 자체를 바꾸지 못한다.
    // 위의 경우는 포인터변수가 가르키는 값 (EX: *pExam)에 const를 주어서 가르키는 값을 바꾸지 못한다.
    int * const pExam4 = &exam;
    cout << "pExam4 = " << pExam4 << endl;
    // pExam4 = &ex;
    // cout << "pExam4 = " << pExam4 << endl;
    *pExam4 = 1000;
    cout << "바뀐 exam 값 = " << exam << endl;

    //뭐여

    return 0;
}