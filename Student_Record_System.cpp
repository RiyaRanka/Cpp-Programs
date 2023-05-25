//Need changes
#include <iostream>
// #include <iomanip>
using namespace std;

struct StudentInfo {
  int scholarNumber;
  char firstName[50];
  char lastName[50];
  char branch[50];
  int phoneNumber;
  char email[50];
} s[50];
int numberOfStudent = 0;
void addStudentInfo(){
    cout << "Enter Scholar Number of Student: ";
    int scholar_no;
    cin >> scholar_no;
    for (int i = 0; i < numberOfStudent; i++) {
        if (s[i].scholarNumber == scholar_no) {
            cout << " Student with the given scholar number already exists in the database\n";
            return;
        }
    }
    cout << "Enter the First name of the student: ";
    cin >> s->firstName;
    cout << "Enter the Last name of the student: ";
    cin >> s->lastName;
    cout << "Enter the Branch of student: ";
    cin >> s->branch;
    cout << "Enter Phone Number of student: ";
    cin >> s->phoneNumber;
    cout << "Enter Email of student: ";
    cin >> s->email;
}

// void printStudentInfo(){}

// void updateStudentInfo(){}

// void deleteStudentInfo(){}

int main() {
  int choice;
//   Menu
  while (true) { 
    cout << "-----Welcome to Record System------\n 1. Add information about Student \n 2. Print the information about the student \n 3. Update information about student \n 4. Searchvinformation about student \n 5. Delete the information about the student \n 6. Exit from the program\n ";
            cin >> choice;
    switch (choice) {
    case 1:
      addStudentInfo();
      break;
    // case 2:
    //   printStudentInfo();
    //   break;
    // case 3:
    //   updateStudentInfo();
    //   break;
    // case 4:
    //   searchStudentInfo();
    //   break;
    // case 5:
    //   deleteStudentInfo();
    //   break;
    case 6:
      exit(0);
      break;
    }
  }
    return 0;
}
 