#include <iostream>
using namespace std;

int main() {
  const string EMAIL = "stlheure@cabrillo.edu";
  const string PASSWORD = "password123";
  string user_email;
  string user_password;

  cout << "Email: ";
  cin >> user_email;

  cout << "Password: ";
  cin >> user_password;

  while (user_email != EMAIL || user_password != PASSWORD) {
    cout << "Incorrect email or password" << endl << endl;

    cout << "Email: ";
    cin >> user_email;

    cout << "Password: ";
    cin >> user_password;
  }

  cout << "Logged in successfully" << endl;

  return 0;
}