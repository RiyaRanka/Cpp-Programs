// Problem: Enter values of vector by user and sort the vector in ascending order.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int num, size;
    cout << "Enter size of vector: ";
    cin >> size;
    if (size <= 0) {
        cout << "Enter valid size of vector!";
    }
    else {
        vector<int> arr;
    
        for (int i=0; i<size; i++) {
            cout << "Enter the value at " << i << " : ";
            cin >> num;
            arr.push_back(num);
        }

        cout << "\nYour vector is: ";
        for (auto &p: arr) {
            cout << p << " ";
        }

        sort(arr.begin(), arr.end());
        cout << "\n Sorted Vector: ";
        for (auto p : arr) {
            cout << p << ' ';
        }
        cout << endl;
        }
    return 0;
}
