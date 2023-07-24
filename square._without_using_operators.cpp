// Calculatae Square of number without using multiplication(*), division(/), power function (pow()).
#include <bits/stdc++.h> 
int calculateSquare(int num)
{
// Method 1
    // int n = abs(num);
    // int s = 0; 
    // for (int i=1; i<=n; i++) {
    //     s+=n;
    // }
    // return s;

 // Method 2
    // int square = 1;
    // for (int i=1; i<=2; i++) {
    //     square = square * num;
    // }
    // return square;

 // Method 3
    // int s = 0; 
    // for (int i=1; i<=abs(num); i++) {
    //     s += abs(num);
    // }
    // return s;

 // Method 4
    int count = 0; 
    if (num<0) {
        num = -(num);
    }
    for (int i=1; i<=num; i++) {
        count += num;
    }
    return count;

//     // Method 5: Bitwise operator
//     if (num == 0) {
//         return 0;
//     }
//     if (num < 0) {
//         return 0;;
//     }
//     if (num & 1) {
//         return (calculateSquare(num>>1)<<2)+ ((num>>1)<<2) + 1;
//     }
//     return calculateSquare(num >> 1) << 2;
}
