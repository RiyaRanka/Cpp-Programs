#include <iostream>
using namespace std;

string convertToString (char arr[], int size) {
    int i;
    string s = "";
    for (i=0; i<size; i++) {
        s = s + arr[i];
    }
    cout << "The given array to string: " << s << endl;
    return 0;
}

int main() {
    int size, i;
    char arr[50];
    cout << "Enter size of character array: ";
    cin >> size;
    for (i=0; i<size; i++) {
        cout << "Enter value at index " << i << " : ";
        cin >> arr[i];
    }
    // printing out the array
    cout << "\nThe entered character array is : [";
    for (i=0; i<size; i++) {
        cout << arr[i] << ", ";
    }
    // \b\b removes the last comma in the array
    cout << "\b\b]" << endl; 

    convertToString (arr, size);
    return 0;
}