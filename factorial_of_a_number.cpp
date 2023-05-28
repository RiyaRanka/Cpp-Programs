// Problem: Find the factorial of a given number.
#include <iostream> 
using namespace std;
int main () {
    int num;
    long fact = 1.0;
    cout << "Enter the number for finding its factorial: ";
    cin >> num;
    if (num<0) {
        cout<< "Factorial of negative number cannot exist.";
    }
    else {
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        cout << "Factorial of " << num << " = " << fact << endl;
    }
    return 0;
}
