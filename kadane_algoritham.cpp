// Problem: Given an array or 'arr' with size 'size'. Find the sum of subarray (including empty subarray) having maximum sum among all subarrays.
#include <iostream>
using namespace std;
long long maxSubarraySum(int arr[], int size) {
    long long max_sum=0,maxelement=0;
    for(int i=0;i<size;i++) {
        maxelement=maxelement+arr[i];
        if(max_sum<maxelement) {
            max_sum=maxelement;
        }
        else if(maxelement<0) {
            maxelement=0;
        }
    }
    cout << "\n Using Kadane's Algoritham maximum sum of subarray is: " << max_sum;
}

int main() {
    int size, arr[100] ;
    cout << "Enter size of array: ";
    cin >> size;
    for (int i=0; i<size; i++) {
        cout << "Enter the value of an array : ";
        cin >> arr[i]; 
    }
    maxSubarraySum(arr, size);
}
