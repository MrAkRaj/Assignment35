#include <iostream>
using namespace std;

template <typename T>
T findLargest(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Largest of 5 and 3 is " << findLargest(5, 3) << endl;
    cout << "Largest of 4.5 and 2.3 is " << findLargest(4.5, 2.3) << endl;
    return 0;
}
