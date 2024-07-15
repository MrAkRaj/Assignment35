#include <iostream>
using namespace std;

// Generic function for addition
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Addition of int: " << add(5, 3) << endl;
    cout << "Addition of double: " << add(5.5, 3.3) << endl;
    cout << "Addition of string: " << add(string("Hello "), string("World")) << endl;
    return 0;
}
