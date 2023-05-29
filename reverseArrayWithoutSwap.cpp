// Printing reverse array without using swap and array is given by user.
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
     cout << "Your aray is [";
    for (i=0; i<size; i++) {
        cout << arr[i] << ", ";
    }
    cout << "\b\b] \n" << "Reverse array is [";
    for (i = size-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << "\b\b]" << endl;
    return 0;
}
