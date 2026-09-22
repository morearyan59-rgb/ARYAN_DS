#include <iostream>
using namespace std;

int main() {
    int roll[5], searchRoll;
    bool found = false;

    // Input roll numbers
    cout << "Enter roll numbers of 5 students:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> roll[i];
    }

    // Input roll number to search
    cout << "Enter roll number to search: ";
    cin >> searchRoll;

    // Search for the roll number
    for (int i = 0; i < 5; i++) {
        if (roll[i] == searchRoll) {
            found = true;
            break;
        }
    }

    // Display result
    if (found)
        cout << "Student found";
    else
        cout << "Student not found";

    return 0;
}