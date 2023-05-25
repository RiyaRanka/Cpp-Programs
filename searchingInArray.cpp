#include <iostream>
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
    cout << endl;

    int searchNum;
    int n = 0;
    cout << "Enter the number you want to search in an array : ";
    cin >> searchNum;

    for (i=0; i<size; i++) {
            if (searchNum == arr[i]){
                cout << searchNum << " is at index " << i << endl; 
                n++;

            }
    
    }
    if (i == size && n==0) {
         cout << "The value you entered is not in the array." << endl;
    }
    return 0;
}