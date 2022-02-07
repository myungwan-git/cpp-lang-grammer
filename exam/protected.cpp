#include <iostream>
#include <string>
using namespace std;

class Top {
    private:
        string name;
    protected:
        string user;
    public:
        Top();
        Top(string user);
        void print();
};

class Middle : public Top {
    public:
        Middle();
};

Top::Top()
:user("initial"),name("initial") {
    
}
Top::Top(string us)
:user(us) {

}
void Top::print() {
    cout << "user / name = " << user << "  " << name <<  endl;
    user = "ABC";
    name = "ABC";
    cout << "ABC user / name = " << user << "  " << name << endl;
}

Middle::Middle()
{
    cout << "top user = " << Top::user << endl;
}


int main() {
    Top top;
    top.print();

    Middle middle;
    
    
    
    return 0;
}