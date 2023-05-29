// Problem: Printing reverse array using swap and array is given by user.
#include <iostream>
using namespace std;

void reverseArray (int arr[], int size) {
    int start = 0, end = size-1;
    while (start <= end) {
        swap (arr[start], arr[end]); 
        start++;
        end--;
        }
    }

void printReverse(int arr[], int size) {
    cout << "Reverse array is ";
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
} 

int main() {
    int size, arr[50], i;
    cout << "Enter size of array: ";
    cin >> size;
    for (i=0; i<size; i++) {
        cout << "Value of array at index " << i << " is ";
        cin >> arr[i];
    }
    cout << "\nYour array is ";
    for (i =0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray (arr, size);
    printReverse (arr, size);
    return 0;
}
