#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValidBrackets(const string& s) {
    stack<char> stack;
    for (char c : s) {
        if (c == '(') {
            stack.push(c);
        } else {
            if (stack.empty()) return false;
            char top = stack.top();
            stack.pop();
            if (c != ')') {
                return false;
            }
        }
    }
    return stack.empty();
}

int main() {
    string s = "()(()))";
    if (isValidBrackets(s)) {
        cout << "Valid" << endl;
    } else {
        cout << "Invalid" << endl;
    }
    return 0;
}
