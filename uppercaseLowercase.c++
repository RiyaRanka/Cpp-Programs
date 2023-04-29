#include <iostream>
using namespace std;
int main () {
     string s1 = "abcde";
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    cout<<s1<<endl;
    string s2 = "WXYZ"
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
   cout<<s2<<endl;   
    return 0;
}