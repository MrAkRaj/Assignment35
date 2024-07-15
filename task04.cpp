#include <iostream>
using namespace std;

template <typename T>
void swapData(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    swapData(x, y);
    cout << "Swapped int values: x = " << x << ", y = " << y << endl;

    double m = 1.1, n = 2.2;
    swapData(m, n);
    cout << "Swapped double values: m = " << m << ", n = " << n << endl;

    return 0;
}
