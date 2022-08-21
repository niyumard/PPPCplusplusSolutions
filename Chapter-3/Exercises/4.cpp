/*
Determines the smaller, larger, sum, difference, product, and ratio of two
numbers put into integer variables and reports them to the user. (Obviously the
ratio won't be accurate, since the program can't handle floats.)
*/
#include <iostream>
using namespace std;

int main() {
  int var1, var2;
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
    cout << "\n[Sometimes] Inaccurate ratio (number 1 to number 2):"
         << var1 / var2;
  } else {
    cout << "\nCan't divide to zero! Are you trying to break your computer?";
  }
  return 0;
}
