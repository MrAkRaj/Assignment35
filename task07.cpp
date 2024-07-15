#include <iostream>
using namespace std;

// Non-templated base class
class Base {
public:
    void show() {
        cout << "Base class" << endl;
    }
};

// Templated derived class
template <typename T>
class Derived : public Base {
public:
    T value;
    Derived(T val) : value(val) {}
    void display() {
        show();
        cout << "Derived class with value: " << value << endl;
    }
};

int main() {
    Derived<int> d(100);
    d.display();

    Derived<string> ds("Hello");
    ds.display();

    return 0;
}
