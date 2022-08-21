/*
Converts some spelled-out numbers to numbers.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
  string user_input;
  cout << "This program converts spelled-out numbers into digits. Please enter "
          "a number from 0 to 4:";
  cin >> user_input;
  if (user_input == "Zero" || user_input == "zero") {
    cout << 0;
  } else if (user_input == "One" || user_input == "one") {
    cout << 1;
  } else if (user_input == "Two" || user_input == "two") {
    cout << 2;
  } else if (user_input == "Three" || user_input == "three") {
    cout << 3;
  } else if (user_input == "Four" || user_input == "four") {
    cout << 4;
  } else {
    cout << "\'" << user_input << "' is not a number that I know.";
  }

  return 0;
}
