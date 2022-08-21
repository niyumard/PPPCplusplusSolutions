/*
Sum up the value of coins in your piggy bank. With no use of arrays.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
  int pennies, nickels, dimes, quarters, halfdollars, onedollarcoins,
      total_amount_in_cents;
  double total_amount_in_dollars;
  cout << "Let's count how much money you have in you piggy bank! This program "
          "will ask you how many pennies, nickels, dimes, quarters, half "
          "dollars, and one-dollar coins you have.\n";

  // Get values from the user
  cout << "Pennies:";
  cin >> pennies;
  cout << "Nickels:";
  cin >> nickels;
  cout << "Dimes:";
  cin >> dimes;
  cout << "Quarters:";
  cin >> quarters;
  cout << "Half dollars:";
  cin >> halfdollars;
  cout << "One-dollar coins:";
  cin >> onedollarcoins;

  // Reiterate the inputs
  cout << "You have " << pennies;
  if (pennies == 1) {
    cout << " penny.";
  } else {
    cout << " pennies.";
  }
  cout << "\n";

  cout << "You have " << nickels;
  if (nickels == 1) {
    cout << " nickel.";
  } else {
    cout << " nickels.";
  }
  cout << "\n";

  cout << "You have " << dimes;
  if (dimes == 1) {
    cout << " dime.";
  } else {
    cout << " dimes.";
  }
  cout << "\n";

  cout << "You have " << quarters;
  if (quarters == 1) {
    cout << " quarter.";
  } else {
    cout << " quarters.";
  }
  cout << "\n";

  cout << "You have " << halfdollars;
  if (halfdollars == 1) {
    cout << " half dollar.";
  } else {
    cout << " half dollars.";
  }
  cout << "\n";

  cout << "You have " << onedollarcoins;
  if (onedollarcoins == 1) {
    cout << " one-dollar coin.";
  } else {
    cout << " one-dollar coins.";
  }
  cout << "\n";

  // Summation into dollars and cents.
  total_amount_in_cents = pennies + (5 * nickels) + (10 * dimes) +
                          (25 * quarters) + (50 * halfdollars) +
                          (100 * onedollarcoins);
  cout << "You have " << total_amount_in_cents;
  if (total_amount_in_cents == 1) {
    cout << " cent.\n";
  } else {
    cout << " cents.\n";
  }
  // We need to change the type of our variable to double in order to be able to
  // calcuclate.
  total_amount_in_dollars = total_amount_in_cents / 100;
  cout << "That's to say, you have $" << total_amount_in_dollars << ".";

  return 0;
}
