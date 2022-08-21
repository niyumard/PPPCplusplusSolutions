/*
A simple calculator.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
  string operation;
  double first_number;
  double second_number;
  cout
      << "This program gets an operator followed by two numbers and then "
         "prints out the result\n"
      << "Enter an operation and two digits, these must be seperated by space:";
  cin >> operation >> first_number >> second_number;
  if (operation == "+") {
    cout << first_number + second_number;
  } else if (operation == "-") {
    cout << first_number - second_number;
  } else if (operation == "*") {
    cout << first_number * second_number;
  } else if (operation == "/") {
    if (second_number != 0) {
      cout << first_number / second_number;
    } else {
      cout << "Cannot divide by zero!!";
    }
  } else {
    cout << "Please enter one of the supported operators (+,-,*,/)";
  }

  return 0;
}
