// Problem: Find factorial using recursion.
#include <iostream>
using namespace std;

// Using recurssion 
int factorial(int num) {
    //base case
    if (num == 0) {
        return 1;
    }
    
    int fact = num * factorial(num-1);;

    return fact;
}

int main() {
    int num;
    cout << "Enter number to find the factroial: ";
    cin >> num;
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers.\nPlease enter positive numbers to find the factorial." << endl;
    }

    else {
        int result = factorial(num);
        cout << "Factorial of " << num << " is " << result << endl;
    }
    return 0;
}
