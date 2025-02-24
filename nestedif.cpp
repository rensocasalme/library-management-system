#include <iostream>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

int main() {

    int grade;

    cout << "Enter student Grade" << endl;
    cin >> grade;

    if(grade >= 90){
        cout << "A" << endl;
    }
    else if (grade >= 80 && grade <=89) {
        cout << "B" << endl;
    }
    else if (grade >= 70 && grade <=79) {
        cout << "C" << endl;
    }
    else if (grade >= 60 && grade <=69) {
        cout << "D" << endl;
    }
    else {
        cout << (grade >=50 ? "Passed" : "Failed");
    }

    return 0;
}