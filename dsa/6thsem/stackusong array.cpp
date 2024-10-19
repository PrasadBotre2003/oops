#include <bits/stdc++.h>
using namespace std;

class Stack {
private:
    int* arr;
    int capacity;
    int top;

public:
    Stack(int size) {
        arr = new int[size];
        capacity = size;
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int data) {
        if (isfull()) {
            cout << "Stack overflow: Cannot insert " << data << endl;
            return;
        }
        arr[++top] = data;
        cout << "Data inserted: " << arr[top] << endl;
    }

    void pop() {
        if (isempty()) {
            cout << "Stack underflow: Cannot pop element" << endl;
            return;
        }
        cout << "Data popped: " << arr[top] << endl;
        top--;
    }

    bool isempty() {
        return top == -1;
    }

    bool isfull() {
        return top == capacity - 1;
    }
};

int main() {
    Stack st(10);
    st.push(10);
    st.pop(); // Demonstrating pop operation
    st.pop(); // Attempt to pop from an empty stack

    return 0;
}
