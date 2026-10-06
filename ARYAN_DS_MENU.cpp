#include <iostream>
using namespace std;

// Recursive function: shows the menu, handles one choice,
// then calls itself again until the user chooses Exit.
void showMenu() {
    int choice;

    cout << "\n===== RESTAURANT MENU =====\n";
    cout << "1. Burger        - Rs. 120\n";
    cout << "2. Pizza         - Rs. 250\n";
    cout << "3. Pasta         - Rs. 180\n";
    cout << "4. Sandwich      - Rs. 90\n";
    cout << "5. Cold Drink    - Rs. 50\n";
    cout << "6. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 6) {
        cout << "Thank you for visiting! Goodbye.\n";
        return;                 // base case: stop the recursion
    }

    switch (choice) {
        case 1: cout << "You selected Burger. Price: Rs. 120\n"; break;
        case 2: cout << "You selected Pizza. Price: Rs. 250\n"; break;
        case 3: cout << "You selected Pasta. Price: Rs. 180\n"; break;
        case 4: cout << "You selected Sandwich. Price: Rs. 90\n"; break;
        case 5: cout << "You selected Cold Drink. Price: Rs. 50\n"; break;
        default: cout << "Invalid choice! Please try again.\n";
    }

    showMenu();                 // recursive call: display the menu again
}

int main() {
    showMenu();
    return 0;
}