/*
Problem Statement:
Write a C program that takes two arrays as input and determines whether they are equal or not. 
The program should compare the elements of both arrays and return true if they have the same elements in any order, and false otherwise.

Input: Two arrays arr1[] and arr2[] of integers.
The size of the arrays size1 and size2, where size1, size2 represents the number of elements in arr1 and arr2 respectively.
Output: True if the arrays arr1[] and arr2[] are equal, false otherwise.
*/

#include <iostream>
using namespace std;

int compareArray(int size1, int arr1[], int size2, int arr2[]) {
    int i, j, count = 0, flag = 0;
    for (i=0; i<size1; i++) {
        for (j=0; j<size2; j++) {
            if (arr1[i] == arr2[j]) {
               flag = 1;
                arr2[j] = arr2[size2 - 1];
                size2--;
               count++;
               break;
            }
            else {
                flag = 0;
            }
        }
    }
    if (flag == 0) {
        flag++;
        cout << "False" << endl;
    }
    if (count == size1 || count == size2) {
        count++;
        cout << "True" << endl;
    }
    return 0;
}

int main() {
    int size1, arr1[50], size2, arr2[50];
    cout << "Enter size of 1st array: ";
    cin >> size1;
    int i1, i2;
    for (i1=0; i1<size1; i1++) {
        cout << "Enter value of 1st array : " ;
        cin >> arr1[i1];
    }
    
    cout << "\nEnter size of 2nd array: ";
    cin >> size2;
    for (i2=0; i2<size2; i2++) {
        cout << "Enter value of 2nd array : ";
        cin >> arr2[i2];
    }

    cout << "\nFirst array : [";
    for (i1=0; i1<size1; i1++) {
        cout << arr1[i1] << ", ";
    }
    cout << "\b\b]" << endl;
    cout << "Second array : [";
    for (i2=0; i2<size2; i2++) {
        cout << arr2[i2] << ", ";
    }
    cout << "\b\b]" << endl;
    compareArray (size1, arr1, size2, arr2);
    return 0;
}
