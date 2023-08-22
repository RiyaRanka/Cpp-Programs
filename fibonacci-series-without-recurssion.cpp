// Problem: Find the Fibonacci series without using recurssion and only with for loop.
#include <iostream>
using namespace std;

int fib (int num) {
    int i, t1 = 0, t2 = 1, nextTerm = 0;
    for (i=0; i<num; i++) {
        if ((i == 0) || (i == 1)) {
            cout << i << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << ", ";
    }
    return 0;
}

int main () {
    int num;
    cout << "Enter the number of terms for fibonacci series: ";
    cin >> num;
    if (num < 0) {
        cout << "Series number can't be negative in fibonacci series." << endl;
    }
    else if (num == 0) {
        cout << "Series number can't be zero" << endl;
    }
    else {
        cout << "The fibonacci series upto " << num << " is : ";
        fib(num);
        cout << "\b\b..." << endl;
    }
    return 0;
}
