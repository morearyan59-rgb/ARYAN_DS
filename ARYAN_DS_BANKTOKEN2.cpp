#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> history;

    // Store 5 recently served customer token numbers in the stack
    cout << "Enter 5 served customer token numbers (in the order they were served):\n";
    for (int i = 1; i <= 5; i++) {
        int token;
        cout << "Served customer " << i << " token: ";
        cin >> token;
        history.push(token);    // latest served customer ends up on top
    }

    // Display service history, most recently served customer first (LIFO)
    cout << "\nService history (most recent first):\n";
    while (!history.empty()) {
        cout << "Token " << history.top() << "\n";
        history.pop();
    }

    return 0;
}