#include <iostream>
#include <string>
using namespace std;

class NoCopy {
    private:
        string name;
        int age;
    public:
        NoCopy(string name, int age);
        ~NoCopy();
        // NoCopy(const NoCopy &copy) = delete;
        void print() const;
};

NoCopy::NoCopy(string nam, int ag)
:name(nam), age(ag) 
{
        
}

NoCopy::~NoCopy() 
{
    cout << "소멸자 호출 name / age = " << name << "  " << age << endl;
}

void NoCopy::print() const {
    // age = 50;
    cout << "name / age = " << name << "  " << age << endl;
    
}

int main() {

    NoCopy co1("KIM", 30);
    co1.print();
    
    NoCopy co2(co1);
    co2.print();
    
    return 0;
}





