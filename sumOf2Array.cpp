// Problem: Sum of two array by parallel indexing, both arrays ar inputed by user.
#include <iostream>
using namespace std;
int main() {
    int size1, size2, i;
    cout << "Enter 1st array size: ";
    cin >> size1;
    int arr1[100];
    cout << "Enter value of 1st array : ";
    for (i=0; i<size1; i++) {
        cin >> arr1[i];
    }
    
    cout << "Enter 2nd array size: ";
    cin >> size2;
    int arr2[100];
    cout << "Enter value of 2nd array : ";
    for (i=0; i<size2; i++) {
        cin >> arr2[i];
    }
    
    if(size1<size2){
        while(size1<size2){
            arr1[size1] =0;
            size1++;
        }
    }
    else {
        while(size2<size1){
            arr2[size2] =0;
            size2++;
        }
    }
    int sum[size1];
    for(i=0;i< size1;i++){
        sum[i] =arr1[i]+arr2[i];

    }
    cout<<"\nThe sum of parallel index is : [";
    for(int i=0;i<size1;i++){
    cout << sum[i] << ", ";
    }
    cout << "\b\b]" << endl;

    return 0;
}
