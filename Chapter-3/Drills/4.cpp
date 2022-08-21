#include <iostream>
#include <string>
using namespace std;

int main() {
  // declaration of the variables
  string first_name;  // first_name is a variable of type string
  string friend_name; // friend_name is a variable of type string
  char friend_gender; // friend_gender is a variable of type char
  int age;            // age is a variable of type int

  // read characters into first_name
  cout << "Enter the name of the person you want to write to:";
  cin >> first_name;

  // read characters into frined_name
  cout << "Enter the name of a friend:"; // Everything after a white space won't
                                         // be stored in the variable but let's
                                         // hope the user eneters a name without
                                         // a white space.
  cin >> friend_name;

  // read a single character into friend_sex
  cout << "Enter the gender of the friend, use f to indicate female, m to "
          "indicate male, and any other charachter for other genders:";
  cin >> friend_gender;

  // Program's output:
  cout << "Dear, " << first_name << ",\n";
  cout << "How are you? I am fine. I miss you.\n";
  cout << "Have you seen " << friend_name << " lately?\n";
  if (friend_gender == 'f') {
    cout << "Please tell her to call me asap.";
  } else if (friend_gender == 'm') {
    cout << "Please tell him to call me asap.";
  } else {
    cout << "Please tell " << friend_name << " to call me asap.";
  }
}
