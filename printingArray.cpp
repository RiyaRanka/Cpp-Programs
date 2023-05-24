#include <iostream>
using namespace std;
int main() {
    int size, arr[100], i;
    cout << "Enter array size: ";
    cin >> size;
    for (i=0; i<size; i++) {
        cout << "Value of array at " << i << " index is ";
        cin >> arr[i];
    }
    cout << "Your array is ";
    for (i =0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}