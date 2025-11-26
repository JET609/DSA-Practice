#include <iostream>
#include <vector>

// Simple stack implementation using vector
class Stack {
    std::vector<int> arr;
public:
    // Push an element onto the stack
    void push(int x) {
        arr.push_back(x);
    }
    // Pop the top element from the stack
    void pop() {
        if (!arr.empty()) arr.pop_back();
    }
    // Return the top element
    int top() const {
        return arr.empty() ? -1 : arr.back();
    }
    // Check if the stack is empty
    bool empty() const {
        return arr.empty();
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    std::cout << "Top element: " << st.top() << std::endl;
    st.pop();
    std::cout << "Top after pop: " << st.top() << std::endl;
    return 0;
}
