#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

for (int i = 0; i < 3; ++i) {
    int num;

    cout << "Guess my number(20-30): "<< endl;
    cin >> num;

    if(num >= 29){
        cout<< "Your number is Higher" << endl;
    }
    else if (num <= 27) {
        cout << "Your number is Lower" << endl;
    } 
    else if (num == 28) {
        cout << "CONGRATULATIONS!! ANG LUPET MO TROPA!" << endl;
        break;
    }
}

    return 0;
}