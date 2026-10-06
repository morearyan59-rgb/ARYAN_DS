#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> tokens;

    // Store 5 customer token numbers in the queue
    cout << "Enter 5 customer token numbers:\n";
    for (int i = 1; i <= 5; i++) {
        int token;
        cout << "Customer " << i << " token: ";
        cin >> token;
        tokens.push(token);     // added at the rear
    }

    // Serve customers in the same order they received their tokens (FIFO)
    cout << "\nServing customers in order:\n";
    while (!tokens.empty()) {
        cout << "Now serving token number: " << tokens.front() << "\n";
        tokens.pop();           // removed from the front
    }

    cout << "\nAll customers have been served.\n";
    return 0;
}