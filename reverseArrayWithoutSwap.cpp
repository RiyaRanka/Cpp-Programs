#include <iostream>
using namespace std;

int main() {
    int size, i;
    cout << "Enter size of array: ";
    cin >> size;
    
    int arr[size];
    for (i=0; i<size; i++) {
        cout << "Enter Value at index " << i << " : ";
        cin >> arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Reverse array is ";
    for (int i = n-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}