#include <iostream>
#include <stack>
using namespace std;

// Remove a specific order from the orders stack.
// Returns true if found (and removed), false otherwise.
bool removeOrder(stack<int> &orders, int target) {
    stack<int> temp;
    bool found = false;

    while (!orders.empty()) {
        int top = orders.top();
        orders.pop();
        if (!found && top == target) {
            found = true;          // skip this one: it is cancelled
        } else {
            temp.push(top);
        }
    }
    // restore the remaining orders in their original order
    while (!temp.empty()) {
        orders.push(temp.top());
        temp.pop();
    }
    return found;
}

int main() {
    stack<int> orders;      // active orders
    stack<int> cancelled;   // cancelled orders (top = most recently cancelled)

    cout << "Enter 5 order numbers:\n";
    for (int i = 1; i <= 5; i++) {
        int num;
        cout << "Order " << i << ": ";
        cin >> num;
        orders.push(num);
    }

    cout << "\nEnter order numbers to cancel one by one (0 to stop):\n";
    while (true) {
        int num;
        cout << "Cancel order: ";
        cin >> num;
        if (num == 0) break;

        if (removeOrder(orders, num)) {
            cancelled.push(num);
            cout << "Order " << num << " cancelled.\n";
        } else {
            cout << "Order " << num << " not found among active orders.\n";
        }
    }

    // Popping the cancelled stack gives most recent cancellation first (LIFO)
    cout << "\nCancelled orders (most recent first):\n";
    if (cancelled.empty()) {
        cout << "No orders were cancelled.\n";
    }
    while (!cancelled.empty()) {
        cout << cancelled.top() << "\n";
        cancelled.pop();
    }

    return 0;
}