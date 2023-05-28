// Problem: Create a calculator program in which the inputs are take by user.
#include <iostream>
using namespace std;

int main() {
    int op;
    float num1, num2;

    while (true) {
        cout << "Enter 1 for addition" << endl
             << "Enter 2 for subtraction" << endl
             << "Enter 3 for division" << endl
             << "Enter 4 for multiplication" << endl
             << "Enter 5 for percentage" << endl
             << "Enter 0 to exit" << endl
             << "Enter a number to perform a specific function: ";
        cin >> op;

        if (op == 0) {
            cout << "Exiting the program..." << endl;
            break;
        }

        if (op < 1 || op > 5) {
            cout << "Invalid operation chosen!" << endl << endl;
            continue;
        }

        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        switch (op) {
            case 1:
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;

            case 2:
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;

            case 3:
                if (num2 != 0) {
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                } else {
                    cout << "Denominator cannot be zero!" << endl;
                }
                break;

            case 4:
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;

            case 5:
                if (num2 != 0) {
                    cout << num1 << " % " << num2 << " = " << (num1 / num2) * 100 << "%" << endl;
                } else {
                    cout << "Denominator cannot be zero!" << endl;
                }
                break;
        }
        cout << endl;
    }
    return 0;
}
