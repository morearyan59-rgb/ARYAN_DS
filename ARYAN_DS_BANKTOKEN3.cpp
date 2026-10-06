#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> serviceHistory;
    int token;

    // Store 5 recently served token numbers
    cout << "Enter 5 served customer token numbers:\n";

    for (int i = 0; i < 5; i++) {
        cin >> token;
        serviceHistory.push(token);
    }

    // Display service history from most recent
    cout << "\nService History (Most Recent First):\n";

    while (!serviceHistory.empty()) {
        cout << "Token No: " << serviceHistory.top() << endl;
        serviceHistory.pop();
    }

    return 0;
}