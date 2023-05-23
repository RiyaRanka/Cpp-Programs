#include <iostream>
using namespace std;

void reverseArray (int arr[], int size) {
    int start = 0, end = size-1;
    while (start <= end) {
        swap (arr[start], arr[end]); // how does swap function works
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
        cout << "Value of array " << i+1 << " is ";
        cin >> arr[i];
    }

    cout << "Your array is ";
    for (i =0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray (arr, size);
    printReverse (arr, size);
    return 0;
}