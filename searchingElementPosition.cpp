// Problem: Searching element in array using binary search by user.
#include <iostream>
// #include  <algorithm>
using namespace std;

// C++ also have the built in sorting function in algorithm library
int SortArray (int arr[], int size) {
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++) { 
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<< "\n" << "Array after sorting : ";
   
    for(int i=0; i<size; i++) {
      cout << arr[i ]<< " ";
    }

    return 0;
}

int FindUsingBinarySearch (int arr[], int start, int end, int target) {
    while (start <= end) {
        int mid = (start + end) /2;
        if (arr[mid] == target) {
            cout << "\n'" << target << "' element is found at index " << (mid) << endl;
            exit (0);
        }
        else if (target > arr[mid]) {
            start = mid + 1;
        }
        else if (target < arr[mid]) {
            end = mid - 1;
        }
    }
    cout << "Element not found in an array! ";
    return 0;
}

int main() {
    int size, arr[100], target;
    cout << "Enter the size of an array : ";
    cin >> size;
    for ( int i=0; i<size; i++){
        cout << " Value at index " << i+1 << " : ";
        cin >> arr[i]; 
    }
    // Built-in sorting function 
    // sort (arr, arr+size);
    cout << "\n" << "Enter the element to find in an array : ";
    cin >> target;
    SortArray (arr, size);
    FindUsingBinarySearch(arr, 0, size , target);
    return 0;
}
