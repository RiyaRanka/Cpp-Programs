// Problem: Given an array or 'arr' with size 'size'. Find the sum of subarray (including empty subarray) having maximum sum among all subarrays.
#include <iostream>
using namespace std;
long long maxSubarraySum (int arr[], int size) {
    long long maxSum = 0, maxElement = 0;
    for (int i = 0; i < size; i++) {
        maxElement = maxElement + arr[i];
        if (maxSum < maxElement) {
            maxSum = maxElement;
        }
        else if (maxElement < 0) {
            maxElement = 0;
        }
    }
    cout << "\nUsing Kadane's Algoritham maximum sum of subarray is: " << maxSum;
    return 0;
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
