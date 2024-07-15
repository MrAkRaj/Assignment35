#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Sum of 5 and 3 is " << add(5, 3) << endl;
    cout << "Sum of 4.5 and 2.3 is " << add(4.5, 2.3) << endl;
    return 0;
}
