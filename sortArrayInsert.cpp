//Need more code changes 
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int size, arr[100], i;
    cout << "Enter size of array: ";
    cin >> size;
    for (i=0; i<size; i++) {
        cout << "Enter value of array at " << i << " index : ";
        cin >> arr[i];
    }
    cout << endl;
    
    cout << "Your array is ";
    for (i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    //Sorting the array
    sort (arr, arr + size);
    cout << "\nArray after sorting: ";
    for (i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    //Insertion of element
    int insertNum;
    cout << "Enter the element you want to enter in the array: ";
    cin >> insertNum;
    
    int j;
    for (i=0; i<size; i++) {
        if (insertNum >= arr[i]) {
            for (j=size-1; j>=i; j--) {
                arr[j+1] = arr[j];
            }
            arr[i] = insertNum;
        }
    }
    return 0;
}