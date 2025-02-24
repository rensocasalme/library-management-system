#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int product = 0;
    int result = 0;

    while (product <= 20) {
        result = product + 100;
        product++;
    }

    cout << result;

    return 0;
}