#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    int sales = 0;

while (sales != -1) {
    cout << "Enter sales in dollars (-1 to end): ";
    cin >> sales;

     if (sales != -1) {
        cout << "Salary is: " << "$" << 200 + (sales * 0.09) << endl;
    }
}

    return 0;
}