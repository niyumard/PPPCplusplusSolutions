#include <iostream>
#include <string>
using namespace std;

int main() {
  string first_name;  // first_name is a variable of type string
  string friend_name; // friend_name is a variable of type string
  cout << "Enter the name of the person you want to write to:";
  cin >> first_name; // read characters into first_name
  cout << "Enter the name of a friend:";
  cin >> friend_name; // read characters into friend_name
  cout << "Dear, " << first_name << ",\n";
  cout << "How are you? I am fine. I miss you.\n";
  cout << "Have you seen " << friend_name << " lately?";
}
