// Problem: Sorting an unsroted array by user.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Size of array = ";
    cin >> n;
    int arr[n];
    cout << "Give an array: ";
    for(int i=0; i<n; i++) 
        cin>>arr[i];
    for(int i=0; i<n; i++){ 
        for(int j=i+1; j<n; j++) { if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Sorted array : ";
    for (int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
