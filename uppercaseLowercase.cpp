// Problem: Convert uppercase to lowercase and lowercase to uppercase.
#include <iostream>
using namespace std;
int main () {
     string s1 = "riya";
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    cout<<s1<<endl;
    string s2 = "RIYA"
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
   cout<<s2<<endl;   
    return 0;
}
