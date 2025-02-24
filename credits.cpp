#include <iostream>
using namespace std;

int main() {
    int accountNumber;
    
    while (true) {
        cout << "Enter an account number (-1 to quit): ";
        cin >> accountNumber;

        if (accountNumber == -1) {
            break;
        }

        double beginningBalance, totalCharges, totalCredits, creditLimit;

        cout << "Enter beginning balance: ";
        cin >> beginningBalance;

        cout << "Enter total charges: ";
        cin >> totalCharges;

        cout << "Enter total credits: ";
        cin >> totalCredits;

        cout << "Enter credit limit: ";
        cin >> creditLimit;

        double newBalance = beginningBalance + totalCharges - totalCredits;

        if (newBalance > creditLimit) {
            cout << "Account number: " << accountNumber << endl;
            cout << "Credit limit exceeded." << endl;
        }

        cout << "New balance is: " << newBalance << endl;
    }

    return 0;
}
