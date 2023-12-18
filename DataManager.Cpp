#include <iostream>
using namespace std;

int main() {
    int numbers[100];
    int count = 0;  // Variable to keep track of the number of elements in the array

    cout << "1. Add number" << endl;
    cout << "2. View numbers" << endl;
    cout << "3. Update a specific number" << endl;
    cout << "4. Delete a specific number" << endl;
    cout << "5. Search a number" << endl;
    cout << "6. Sort numbers" << endl;
    cout << "0. Exit" << endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            // Add number
            if (count < 100) {
                cout << "Enter a number: ";
                cin >> numbers[count];
                count++;
            } else {
                cout << "Array is full. Cannot add more numbers." << endl;
            }
            break;
            if()
        // Add cases for other menu options...

        case 0:
            // Exit
            cout << "Exiting the program." << endl;
            break;

        default:
            cout << "Invalid choice. Please enter a valid option." << endl;
    }

    return 0;
}