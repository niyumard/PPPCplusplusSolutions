/*
Converts (float) miles to kilometers.
*/
#include <iostream>
using namespace std;

int main() {
  double distance_in_miles;
  cout << "Welcome! This app converts miles to kilometers.\nEnter a distance "
          "in miles:";
  cin >> distance_in_miles;
  cout << "\nThat is " << distance_in_miles * 1.609 << " kilometers\n";
  return 0;
}
