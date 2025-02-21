#include <iostream>
#include <queue>

using namespace std;

void demonstrateQueue() {
    queue<int> q;

    // Adding elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Displaying the elements of the queue
    cout << "The elements of the queue are: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    demonstrateQueue();
    return 0;
}
