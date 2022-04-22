#include <iostream>

using namespace std;

class Top {
    private:
        int num;
    public:
        Top();
        ~Top();
        void print() const;
};

Top::Top() : num(10) {

}
Top::~Top() {

}
void Top::print() const {
    cout << "num = " << num << "\n";
}

int main() {
    Top top;
    
    shared_ptr<Top> top1(new Top());
    cout << top1 << endl;
    top1->print();
    cout << "get = " << top1.get() << endl;

    shared_ptr<Top> top2(top1);
    top2->print();
    cout << "get = " << top2.get() << endl;

    unique_ptr<Top> top3(new Top()); 
    top3->print();
    // unique_ptr<Top> top4(top3);

    return 0;
}