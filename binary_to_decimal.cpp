// Problem: Take a binary number input form user and convert it into decimal number.
#include <iostream>
#include <cmath>
using namespace std;
int main () {
    long num, temp;
    int dec = 0, i = 0, rem;
    cout << "Enter a binary number: ";
    cin >> num;
    temp = num;
    while ( temp != 0) {
        rem = temp % 10;
        temp /= 10;
        dec += rem * pow (2, i);
        i++;
    }
    cout << num << " in binary is " << dec << " in decimal" << endl;
} 
