// Problem: Print sum of values of array.
#include <iostream>
using namespace std;
int main() {
    int size, arr[100], i;
    cout << "Enter size of an array: ";
    cin >> size;
    for (i=0; i<size; i++) {
        cout << "Enter value at index " << i << " : ";
        cin >> arr[i];
    }
    int sum = 0;
    for (i=0; i<size; i++) {
        sum += arr[i];
    }
    cout <<"Sum of values of array: " << sum<< endl;
    return 0;
}
