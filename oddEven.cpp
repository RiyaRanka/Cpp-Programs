#include <iostream>
using namespace std;
int main() {
    int size, arr[100], i;
    cout << "Enter size of an array :";
    cin >> size;
    for (i=0; i<size; i++) {
        cout << "Enter value at index " << i << " : ";
        cin >> arr[i];
    }
    cout << endl;
    for (i=0; i<size; i++) {
        if (arr[i]%2 == 0) {
        cout << "Even array value is " << arr[i] << " " << endl;
        }

        else {
            cout << "Odd array value is " << arr[i] << " " << endl;
        }
    }
    return 0;
}