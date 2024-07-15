#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Stack {
    vector<T> stack;
public:
    void push(const T &item) {
        stack.push_back(item);
    }

    T pop() {
        if (stack.empty()) {
            throw out_of_range("Stack<>::pop(): empty stack");
        }
        T item = stack.back();
        stack.pop_back();
        return item;
    }

    bool isEmpty() {
        return stack.empty();
    }

    void display() {
        for (const auto &item : stack) {
            cout << item << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    intStack.display();
    cout << "Popped: " << intStack.pop() << endl;
    intStack.display();

    return 0;
}
