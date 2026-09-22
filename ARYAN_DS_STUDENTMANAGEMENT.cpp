#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// Structure to hold student details
struct Student {
    int rollNo;
    string name;
    float marks;
};

// Global vector to store all student records
vector<Student> students;

// Function to add a new student
void addStudent() {
    Student s;
    cout << "\nEnter Roll No: ";
    cin >> s.rollNo;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, s.name);
    cout << "Enter Marks: ";
    cin >> s.marks;

    students.push_back(s);
    cout << "\nStudent added successfully!\n";
}

// Function to display all student records
void displayStudents() {
    if (students.empty()) {
        cout << "\nNo student records found!\n";
        return;
    }

    cout << "\n----------------------------------------\n";
    cout << left << setw(10) << "Roll No" << setw(20) << "Name" << "Marks\n";
    cout << "----------------------------------------\n";

    for (const auto &s : students) {
        cout << left << setw(10) << s.rollNo << setw(20) << s.name << s.marks << "\n";
    }
    cout << "----------------------------------------\n";
}

// Function to search a student by roll number
void searchStudent() {
    if (students.empty()) {
        cout << "\nNo student records found!\n";
        return;
    }

    int roll;
    cout << "\nEnter Roll No to search: ";
    cin >> roll;

    for (const auto &s : students) {
        if (s.rollNo == roll) {
            cout << "\nStudent Found:\n";
            cout << "Roll No: " << s.rollNo << "\n";
            cout << "Name   : " << s.name << "\n";
            cout << "Marks  : " << s.marks << "\n";
            return;
        }
    }

    cout << "\nStudent with Roll No " << roll << " not found!\n";
}

// Function to display the menu
void showMenu() {
    cout << "\n========== Student Management System ==========\n";
    cout << "1. Add Student\n";
    cout << "2. Display All Students\n";
    cout << "3. Search Student by Roll No\n";
    cout << "4. Exit\n";
    cout << "=================================================\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                cout << "\nExiting program... Goodbye!\n";
                break;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}