#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Sum of 3 and 7 is " << add(3, 7) << endl;
    cout << "Sum of 5.5 and 2.5 is " << add(5.5, 2.5) << endl;
    return 0;
}
