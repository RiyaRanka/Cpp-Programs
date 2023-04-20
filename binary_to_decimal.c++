#include <iostream>
#include <cmath>
using namespace std;
int main () {
    long n, temp;
    int dec = 0, i = 0, rem;
    cout << "Enter a binary number: ";
    cin >> n;
    temp = n;
    while ( temp != 0) {
        rem = temp%10;
        temp /=10;
        dec += rem * pow (2, i);
        i++;
    }
    cout << n << " in binary is " << dec << " in decimal" << endl;
} 