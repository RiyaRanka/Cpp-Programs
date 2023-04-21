#include <iostream>
using namespace std;
int main() {
  char op;
  float num1, num2;

  while (1) {
    cout << "Enter 1 for addition" << endl
         << "Enter 2 for subtraction" << endl
         << "Enter 3 for divide " << endl
         << "Enter 4 for multiplication" << endl
         << "Enter 5 for Percentage" << endl
         << "Enter a number to perform specific function : ";
    cin >> op;

    cout << "Enter first number = ";
    cin >> num1;
    cout << "Enter second number = ";
    cin >> num2;

    switch (op) {

    case '1':
      cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
      break;

    case '2':
      cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
      break;

    case '3':
      cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
      break;

    case '4':
      cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
      break;
    case '5':
      if (num2 != 0) {
        cout << num1 << " % " << num2 << " = " << (num1 / num2) * 100 << endl;
      } else {
        cout << "Denominator can't be zero!" << endl;
      }
      break;

    default:
      cout << "Invalid operation is chosen";
      break;
    }
    return 0;
  }
}