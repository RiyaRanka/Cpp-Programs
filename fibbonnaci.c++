// Problem: Print the fibbonnaci series up to given number by user.
#include <iostream>
using namespace std;
int main () {
    int a, b, sum;
    int n;
    cout << "Number of times = ";
    cin >> n;
    a = 0;
    b = 1;
cout<<a<<" "<<b<<" ";
    for (int i = 2; i<n ;i++) {
        sum = a + b;
        cout<<sum<<" ";
        a = b;
        b = sum;
    }
    return 0;
}
