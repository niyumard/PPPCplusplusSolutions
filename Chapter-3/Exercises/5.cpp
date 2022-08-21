/*
Determines the smaller, larger, sum, difference, product, and ratio of two
numbers put into variables of type "double" and reports them to the user)
Unlike 4.cpp this file reports accurate results to the user.
*/
#include <iostream>
using namespace std;

int main() {
  double var1, var2;
  cout << "Please enter two numbers:";
  cin >> var1 >> var2;
  if (var1 > var2) {
    cout << "Smaller:" << var2 << "\tLarger:" << var1;
  } else if (var1 < var2) {
    cout << "Smaller:" << var1 << "\tLarger:" << var2;
  } else {
    cout << "The numbers are equal.";
  }
  cout << "\nSum:" << var1 + var2;
  cout << "\nDifference:" << var1 - var2;
  cout << "\nProduct:" << var1 * var2;
  if (var2 != 0) {
    cout << "\nRatio (number 1 to number 2):" << var1 / var2;
  } else {
    cout << "\nCan't divide to zero! Are you trying to break your computer?";
  }
  return 0;
}
