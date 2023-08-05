// Problem: Check if a number is palindrome or not.
#include <iostream>
using namespace std;
int main () {
    int num, temp, digit, rev = 0;
    cout << "Enter a number (to check if it is palinodrome or not) = ";
    cin >> num;

    temp = num;
    //with do-while loop
    do {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);
    

    cout << "The reverse of the number is: " << rev << endl;

    if (temp == rev) {
        cout << temp << " is palindrome";
    }
    else {
        cout << temp << " is not a palindrome";
    }
    return 0;
}
