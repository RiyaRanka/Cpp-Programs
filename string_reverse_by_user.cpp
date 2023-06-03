// Problem: Reverse a string and string is given by user.
#include<iostream>
using namespace std;
void reverseStr(string& str){
int len = str.length();
    int n = len-1, i = 0;
    while(i<n){
        swap(str[i++],str[n--]);
  }
}

int main(){
//     string str = "Riya";
    string str; 
    cout << "Enter a string: ";
    cin >> str;
    cout << "Reverse string of '" << str; 
    reverseStr(str);
    cout << "' is " << str;
    return 0;
}
