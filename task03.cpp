#include <iostream>
using namespace std;

template <typename T>
T findLargest(T a, T b, T c) {
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int main() {
    cout << "Largest of 5, 3, and 7 is " << findLargest(5, 3, 7) << endl;
    cout << "Largest of 4.5, 2.3, and 6.1 is " << findLargest(4.5, 2.3, 6.1) << endl;
    return 0;
}
