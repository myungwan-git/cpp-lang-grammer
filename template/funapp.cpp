#include "fun.cpp"

int main() {

    Fun<int> fun1(23);
    Fun<string> fun2("is string");

    cout << "fun1 = " << fun1.get() << endl;
    cout << "fun2 = " << fun2.get() << endl;

    fun1.set(50);
    fun2.set("is changed string");

    cout << "fun1 = " << fun1.get() << endl;
    cout << "fun2 = " << fun2.get() << endl;

    return 0;
}