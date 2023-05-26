// Number of occurance of elements in an array by user
#include <iostream>
using namespace std;

void checkOccurance (int arr[], int size, int numOccurance) {
    int i, count = 0;
    for (i=0; i<size; i++) {
        if (arr[i] == numOccurance) {
            count ++;
        }
    }
    if (count == 0) {
        cout << numOccurance << " is not in the array" << endl;
    }
    else {
        cout << numOccurance << " is occuring " << count << " times" << endl;
    }
}

int main() {
    int size, arr[100], i;
    cout << "Enter size of array: ";
    cin >> size;
    for (i=0; i<size; i++) {
        cout << "Enter value at index " << i << " : ";
        cin >> arr[i];
    }
    cout << "Your array is : ";
    for (i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
       int numOccurance;
    cout << "Enter the number to find out its number of occurance : ";
    cin >> numOccurance;
    cout << endl;
    checkOccurance (arr, size, numOccurance);
}