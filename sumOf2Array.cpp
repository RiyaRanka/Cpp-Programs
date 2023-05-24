#include <iostream>
using namespace std;
int main() {
    int size1, size2, i;
    cout << "Enter 1st array size: ";
    cin >> size1;
    int arr1[100];
    for (i=0; i<size1; i++) {
        cout << "Enter value of 1st array at index " << i << ": ";
        cin >> arr1[i];
    }
    cout << "Enter 2nd array size: ";
    cin >> size2;
    int arr2[100];
    for (i=0; i<size2; i++) {
        cout << "Enter value of 2nd array at index " << i << ": ";
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
    cout<<"\nThe sum of parallel index is :";
    for(int i=0;i<size1;i++){
    cout << sum[i] << " " << endl;
    }

    // int result[100];
    // int n1 = sizeof(arr1)/sizeof(arr1[i]);
    // int n2 = sizeof(arr2)/sizeof(arr2[i]);
    // if (n1>n2) {
    //     int result[size1];
    //     for (i=0; i<size1; i++) {
    //         result[size1] = arr1[size1] + arr2[size2];
    //         cout << "Sum of two arrays " << result[size1] << " ";
    //     }
    // }
   
    //     int result[n2];
    //     result[n2] = arr1[size1] + arr2[size2];
    //     cout << "Sum of two arrays " << result[n2];
    // }

    // for (i=0; i<size1; i++) {
    //     int result[arr1[size1] + arr2[size2]];
    //     // result[size1] = arr1[size1] + arr2[size2];
    //     cout << "Sum of two arrays " << result[arr1[size1] + arr2[size2]] << " ";
    // }
    return 0;
}