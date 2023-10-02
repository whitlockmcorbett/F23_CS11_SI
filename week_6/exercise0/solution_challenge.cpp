#include <iostream>
using namespace std;

int main() {
  const string EMAIL = "stlheure@cabrillo.edu";
  const string PASSWORD = "password123";
  string user_email;
  string user_password;
  int tries = 0;
  const int MAX_TRIES = 5;

  cout << "Email: ";
  cin >> user_email;

  cout << "Password: ";
  cin >> user_password;
  tries++;

  while ((user_email != EMAIL || user_password != PASSWORD) && tries < MAX_TRIES) {
    cout << "Incorrect email or password" << endl << endl;

    cout << "Email: ";
    cin >> user_email;

    cout << "Password: ";
    cin >> user_password;
    tries++;
  }
  
  if (tries < MAX_TRIES) {
    cout << "Logged in successfully" << endl;
  } else {
    cout << "You exceeded the max incorrect login amount. Try again later." << endl;
  }

  return 0;
}