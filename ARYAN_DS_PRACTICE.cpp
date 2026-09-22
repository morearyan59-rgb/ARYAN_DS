#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int marks[5];

    // Input marks
    cout << "Enter marks of 5 students:\n";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
    }

    // Arrange marks in descending order
    sort(marks, marks + 5, greater<int>());

    // Display marks from highest to lowest
    cout << "Students from highest marks to lowest:\n";
    for (int i = 0; i < 5; i++) {
        cout << marks[i] << endl;
    }

    return 0;
}