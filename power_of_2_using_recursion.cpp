// Problem: Find power of 2 using recursion.
#include <iostream>
using namespace std;

int power(int num) {
    if (num == 0) {
        return 1;
    }
    int pow = 2 * power(num - 1);
    return pow;
}

int main() {
    int num;
    cout << "Enter number to find the power: ";
    cin >> num;

    if (num < 0) {
        cout << "Power can not be in negative numbers. \nPlease enter positive number in power" << endl;
    }

    else {
        int result = power(num);
        cout << num << " power of 2 is " << result << endl;
    }
    return 0;
}
