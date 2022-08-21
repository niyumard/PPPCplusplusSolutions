/*
Tells the user whether a number is even or odd.
*/
#include <iostream>
using namespace std;

int main() {
  int user_input;
  cout << "This program is designed to help you find whether an integer is "
          "even or odd. Please enter an integer:";
  cin >> user_input;
  if (user_input % 2 == 0) {
    cout << "The number " << user_input << " is even.";
  } else {
    cout << "The number " << user_input << " is odd.";
  }

  return 0;
}
