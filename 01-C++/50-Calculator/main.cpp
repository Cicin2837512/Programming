#include <iostream>
using namespace std;

int main() {
  int x = 0;
  int y = 0;
  char o = 'a';
  cout << "type + or - >> ";
  cin >> o;
  if (o == '+' || o == '-') {
    cout << "type two numbers: \n";
    cout << "number 1: ";
    cin >> x;
    cout << "number 2: ";
    cin >> y;

    if (o == '+') {
     int z = x + y;
     cout << "Your number is: " << z;
    }
    else {
      int z = x - y;
      cout << "Your number is: " << z;
    }
  }
  else {
    cout << "type + or - >> ";
    cin >> o;
    if (o == '+' || o == '-') {
      cout << "type two numbers: \n";
      cout << "number 1: ";
      cin >> x;
      cout << "number 2: ";
      cin >> y;
      if (o == '+') {
        int z = x + y;
        cout << "Your number is: " << z;
      }
      else {
        int z = x - y;
        cout << "Your number is: " << z;
      }
    }
  }
  return 0;
}
