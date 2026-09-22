#include <iostream>
using namespace std;

int main() {
    int rollNo[5];  // array to store roll numbers of 5 students

    // Input roll numbers
    cout << "Enter roll numbers of 5 students:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << (i + 1) << ": ";
        cin >> rollNo[i];
    }

    // Display roll numbers
    cout << "\nRoll numbers of all students are:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << (i + 1) << " -> Roll No: " << rollNo[i] << endl;
    }

    return 0;
}