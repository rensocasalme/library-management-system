#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main() {
   array<int, 5> grades{};  // Declare an empty array to store grades

   for (size_t i = 0; i < grades.size(); ++i) {
       cout << " Enter Grade " << i + 1 << ": ";
       cin >> grades[i]; 
   }

   cout << "\nEntered grades:\n";
   for (size_t i = 0; i < grades.size(); ++i) {
       cout << "Grade " << i + 1 << " is " << setw(2) << grades[i] << endl;
   }
   return 0;
}