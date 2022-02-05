#include <iostream>
#include <string>
using namespace std;

class St {
    private:
        static int age;
    public:
        St();
        St(int plus);
        static int getAge();    
    
};

int St::age = 10;

St::St()
{

}

St::St(int plus)
{
    age+=plus;
}

int St::getAge() 
{
    return age;
}

int main() {
    St st1;
    cout << "age = " << st1.getAge() << endl;
    
    St st2(5);
    cout << "age = " << st1.getAge() << endl;
    cout << "age = " << st2.getAge() << endl;

    St st3(1);
    cout << "age = " << st3.getAge() << endl;

    cout << "age class= " << St::getAge() << endl;

    return 0;
}




