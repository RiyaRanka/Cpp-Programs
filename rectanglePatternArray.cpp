// Problem: Print the rectangle pattern from the array given by user.
// Input: 1 2 3 4 
// Output: 
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 

#include <iostream>
using namespace std;

void withForLoop (int arr[50], int size) {
    int i, j;
     for (i=0; i<size; i++) {
        for (j=0; j<size; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}

// void withWhileLoop (int arr[50], int size) {
//     int i;
//     i=1;
//     while (i <= size) {
//         int j=0;
//         while (j < size) {
//             cout << arr[j] << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// void withDoWhileLoop (int arr[50], int size) {
//     int i=1, j;
//     do {
//         j = 0;
//         do {
//             cout << arr[j] << " ";
//             j++;
//         } while (j < size);
//         cout << endl;
//         i++;
//     } while (i <= size);
// }

int main() {
    int arr[50], size, i;
    cout << "Enter size of array or grid you want: ";
    cin >> size;
    cout << "Enter values of array: ";
    for (i=0; i<size; i++) {
        cin >> arr[i];
    }
    cout << endl;

    withForLoop (arr, size);
    // withWhileLoop (arr, size);
    // withDoWhileLoop (arr, size);

    return 0;    
}
