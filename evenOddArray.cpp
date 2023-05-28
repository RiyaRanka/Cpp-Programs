// Problem: Find odd and even numbers in an array.
#include <iostream>
using namespace std;
int main() {
    int size, arr[50], i;
    cout << "Enter size of an array :";
    cin >> size;
    for (i=0; i<size; i++) {
        cout << "Enter value at index " << i << " : ";
        cin >> arr[i];
    }
    
    cout << endl << "Even numbers in array: ";
    for (i=0; i<size; i++) {
        if (arr[i]%2 == 0) {
            cout << arr[i] << ", ";
        }
    }
    cout << "\b\b " << endl << "Odd numbers in array: ";
    for (i=0; i<size; i++) {
        if (arr[i]%2 != 0) {
            cout << arr[i] << ", ";
        }
    }
    cout << "\b\b " << endl;
    
    return 0;
}
