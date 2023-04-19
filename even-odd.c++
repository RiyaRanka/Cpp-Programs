#include <iostream>
using namespace std;
int main () {
    int a;
    cout<<"Enter a number to find if it is even or odd number = ";
    cin>>a;
    if (a%2 == 0) {
        cout<< a <<" is even number" << endl;
    }
    else {
        cout<< a <<" is odd number" << endl;
    }
    return 0;
}