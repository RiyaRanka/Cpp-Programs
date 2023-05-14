// Need clean code and some editing
#include <iostream>
using namespace std;

// int binarySearch

int main() {
    int size;
    cout << "Enter the size of an array : ";
    cin >> size;
    int arr[100];

    for ( int i=0; i<size; i++){
        cout << " Enter the elements in an array : "; //taking array input
        cin >> arr[i]; 
    }
    // array sorting 
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++) { 
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<< "\n" <<"Array after sorting : ";
   
    for(int i=0; i<size; i++)
      cout<<arr[i]<<" ";
      
    return 0;
}