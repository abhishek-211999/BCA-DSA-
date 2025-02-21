#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    // Stack example
    stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);


    
    cout << "Stack elements: ";
    while (!stack.empty()) {
        cout << stack.top() << " ";
        stack.pop();
    }
    cout << endl;

    return 0;
}