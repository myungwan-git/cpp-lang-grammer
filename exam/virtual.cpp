#include <iostream>
#include <string>
using namespace std;

class Top
{
    private:
        virtual void one() const;
    protected:
        virtual void two() const;
    public:
        virtual void three() const;
};
void Top::one() const
{
    cout << "Top one " << endl;
}
void Top::two() const
{
    cout << "Top two " << endl;
}
void Top::three() const
{
    one();
    two();
    cout << "Top three " << endl;
}

class Middle : public Top
{
    private:
        virtual void one() const;
    protected:
        virtual void two() const;
    public:
        virtual void three() const;
};
void Middle::one() const
{
    cout << "Middle one() " << endl;
}
void Middle::two() const
{
    cout << "Middle two()" << endl;
}
void Middle::three() const
{
    one();
    two();
    cout << "Middle three() " << endl;
}

int main() {
    Top top;
    Middle middle;

    top.three();
    middle.three();

    Top *ptr = new Top();
    cout << endl << endl;
    ptr->three();
    delete ptr;
    
    ptr = new Middle();
    ptr->three();



    return 0;
}