#include <iostream>
using namespace std;
int main () {
    int num;
    cout << "Enter a number for sum of upto that number = " ;
    cin >> num; 
    if (num == 0) {
        cout << "Sum of " << num << " numbers is = 0" << endl;
    }
    else {
    int sum = (num*(num +1))/2; // num(num + 1) /2
    cout << "Sum of " << num << " numbers is = " << sum << endl;
    }
    return 0;
}
