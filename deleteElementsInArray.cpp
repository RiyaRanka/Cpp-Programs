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

    int deleteNum, n=0, j, newSize;
    cout << "Enter the value you want to delete in the array: ";
    cin >> deleteNum;
    for (i=0; i<size; i++) {
            if (deleteNum == arr[i]) {
            for(j=i; j<size; j++) {
                arr[j] = arr[j+1];
            }
            n++;
            i--;
            newSize = size - 1;
        }
    }
    if(j == size && n====0)
        cout<<"\nGiven value doesn't found in the Array.";
    else {
        cout<<"\n'" << deleteNum << "' gets deleted from the array \n" << "The New Array: ";
        for (j=0; j<newSize; j++) {
            cout << arr[j] << " ";
         }
    }
    cout<<endl;
    return 0;
}