/*
An attempt to sort three numbers with no arrays, loops or functions!
*/
#include <iostream>
using namespace std;

int main() {
  int input_1, input_2, input_3;
  int largest;
  cout << "Please enter 3 whole numbers:";
  cin >> input_1 >> input_2 >> input_3;

  if (input_1 < input_2) {
    largest = input_2;
  } else { // equality or being less; Equality doesn't cause a bug in this
           // program since swapping equals doesn't change the order
    largest = input_1;
  }
  if (input_3 > largest) {
    largest = input_3;
  }
  // It is only now in the program that "largest" contains the largest number.

  // Having printed the largest one, we print the other two variables in order
  if (input_1 != largest && input_2 != largest) {
    if (input_1 < input_2) {
      cout << input_1 << ", " << input_2;
    } else {
      cout << input_2 << ", " << input_1;
    }
  }
  if (input_1 != largest && input_3 != largest) {
    if (input_1 < input_3) {
      cout << input_1 << ", " << input_3;
    } else {
      cout << input_3 << ", " << input_1;
    }
  }
  if (input_3 != largest && input_2 != largest) {
    if (input_3 < input_2) {
      cout << input_3 << ", " << input_2;
    } else {
      cout << input_2 << ", " << input_3;
    }
  }
  cout << ", " << largest << "\n";
}
