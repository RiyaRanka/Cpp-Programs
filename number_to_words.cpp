#include <iostream>
using namespace std;

string one[] = {"", "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine ", "Ten ", "Eleven ", "Tweleve ", "Thriteen ", "Fourteen ", "Fifteen ", "Sixteen ", "Seventeen ", "Eighteen ", "Ninteen "};
string ten[] = {"", "", "Twenty ", "Thirty ", "Fourty ", "Fifty ", "Sixty ", "Seventy ", "Eighty ", "Ninety "};


string numToWords (int num, string s) {
    string str = "";
    if (num > 19) {
        str += ten[num / 10] + one[num % 10];
    }
    else {
        str += one[num];
    }
    if (num) {
        str += s;
    }
    return str;
}

string convertToWords (long num) {
    string out;
    out += numToWords((num / 10000000), "Crore ");
    out += numToWords(((num / 100000) % 100), "Lakh ");
    out += numToWords(((num / 1000) % 100), "Thousand ");
    out += numToWords(((num / 100) % 10), "Hundred ");

    if (num > 100 && num % 100) {
        out += "and ";
    }
    out += numToWords((num % 100), "");
    
    if (out == "") 
        out = "Zero";
    return out;
}

int main() {
    long num;
    cout << "Enter a number to convert into digits: ";
    cin >> num;
    if (num > 1000000000) {
        cout << "Please enter the number less than One Hundred Crore." << endl;
    }
    else {
        cout << "The " << num << " in words is: " << convertToWords(num) << endl;
    }
    return 0;
}
