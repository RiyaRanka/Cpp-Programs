// Problem: Fibonacci series with recurssion.
#include <iostream>
using namespace std;

int fib (int num) {
    if ((num == 0) || (num == 1)) {
        return num;
    }
    else {
        int ans = fib(num-1) + fib(num-2);
        return ans;
    }

}

int main() {
    int num, i=0;
    cout << "Enter the number of terms for fibonacci series: ";
    cin >> num;
    
    cout << "The fibonacci series upto " << num << " is: ";
    while (i < num) {
        cout << fib(i) << ", ";
        i++;
    }
    cout << "\b\b..." << endl;
    return 0;
}
