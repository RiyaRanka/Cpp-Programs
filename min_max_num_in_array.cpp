// Problem: Find minimum and maximum value in an array given by user.
#include <iostream>
using namespace std;
int main() {
    int size, arr[100], i;
    cout << "Enter size of an array: ";
    cin >> size;
    for (i=0; i<size; i++) {
        cout << "Enter value at index " << i << " : ";
        cin >> arr[i];
    }
    cout << "\nYour array is ";
    for (i =0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int max = arr[0], min = arr[0];

   for(int i = 1; i < size; i++){
      if(max < arr[i])
         max = arr[i];
      if(min > arr[i]) 
         min = arr[i];
   }
   cout << "Maximum value in given array: "<< max << endl
        << "Minimum value in given array: " << min << endl;
    return 0;
}
