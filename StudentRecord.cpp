#include <iostream>
#include <string>
using namespace std;

struct student
{
    string first_name;
    string last_name;
    int scholar_number;
} s[50];
int number_of_students = 0;
void addStudentDetails()
{
    cout << "----Welcome to Studend Record System-----\n";
    cout << "Enter the Scholar Number of the student\n";
    int scholar_no;
    cin >> scholar_no;
    for (int i = 0; i < number_of_students; i++)
    {
        if (s[i].scholar_number == scholar_no)
        {
            cout << " Student with the given scholar number already exists in the database\n";
            return;
        }
    }
    cout << "Enter the first name of the student\n";
    cout << "Enter the last name of the student\n";
    cin >> s[number_of_students].last_name;
    s[number_of_students].scholar_number = scholar_no;
}
void findStudentByScholarNumber()
{
    int scholar_no;
    cout << "Enter the Scholar Number of the student\n";
    cin >> scholar_no;

    bool found = false;

    for (int i = 0; i < number_of_students; i++)
    {
        if (scholar_no == s[i].scholar_number)
        {
            found = true;
            cout << "The Students Details are:\n";
            cout << "The First name is " << s[i].first_name << "\n";
            cout << "The Last name is " << s[i].last_name << "\n";
        }
    }
    if (!found)
        cout << "No such student with the given scholar number\n";
}
void findStudentByFirstName()
{
    string firstName;
    cout << "Enter the first name of the student\n";
    cin >> firstName;
    bool found = false;
    for (int i = 0; i < number_of_students; i++)
    {
        if (firstName == s[i].first_name)
        {
            found = true;
            cout << "The Students Details are\n";
            cout << "The First name is " << s[i].first_name << "\n";
            cout << "The Last name is " << s[i].last_name << "\n";
            cout << "\n";
        }
    }
    if (!found)
        cout << "No such student with the given first name\n";
}
void findTotalStudents()
{
    cout << "The total number Students are " << number_of_students << "\n";
    cout << "You can have maximum of 50 students data \n";
}

void deleteStudentByScholarNumber()
{
    int scholar_no;
    cout << "Enter the Scholar Number that you want to delete\n";
    cin >> scholar_no;
    bool found = false;
    for (int i = 0; i < number_of_students; i++)
    {
        if (scholar_no == s[i].scholar_number)
        {
            found = true;
            for (int j = i; j < 109; j++)
                s[j] = s[j + 1];
            number_of_students--;
        }
    }

    if (found)
    {
        cout << "The Scholar Number is removed Successfully\n";
    }
    else
    {
        cout << "Scholar number not found in the database\n";
    }
}
void updateStudentDetails()
{
    cout << "Enter the Scholar number whose details you want to update\n";
    int scholar_no;
    cin >> scholar_no;
    bool found = false;
    for (int i = 0; i < number_of_students; i++)
    {
        if (s[i].scholar_number == scholar_no)
        {
            found = true;
            cout << "1. update first name\n"
                    "2. update last name\n"
                    "3. update scholar number.\n";
            int choice;
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "Enter the new first name\n";
                cin >> s[i].first_name;
                break;
            case 2:
                cout << "Enter the new last name\n";
                cin >> s[i].last_name;
                break;
            case 3:
                cout << "Enter the new scholar number\n";
                cin >> s[i].scholar_number;
                break;
            }
        }
    }
    if (found)
    {
        cout << "Details updated successfully.\n";
    }
    else
    {
        cout << "Student not found in the database.\n";
    }
}
void searchByAnything()
{
    string search;
    cout << "Enter anything you wanna search in Student Record: ";
    cin >> search;
    int n = number_of_students;
    int j = 0;
    while (j <= n)
    {
        if (search.compare(s[j].first_name))
        {
            cout << s[j].first_name;
            cout << s[j].first_name;
            cout << s[j].scholar_number;
        }
        else if (search.compare(s[j].last_name))
        {
            cout << s[j].last_name;
            cout << s[j].scholar_number;
        }
        j++;
    }
}

int main()
{
    int choice;
    while (true)
    {
        cout << "WELCOME to Student Record System\n";
        cout << "1. Add new Student \n";
        cout << "2. Search Student by Scholar Number\n";
        cout << "3. Search Student by First Name\n";
        cout << "4. Count Total number of Students\n";
        cout << "5. Delete the Student by Scholar Number\n";
        cout << "6. Update Student Details by Scholar Number\n";
        cout << "7. Search by Anything\n";
        cout << "8. Exit the program\n";
        cout << "Enter your choice\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            addStudentDetails();
            break;
        case 2:
            findStudentByScholarNumber();
            break;
        case 3:
            findStudentByFirstName();
            break;
        case 4:
            findTotalStudents();
            break;
        case 5:
            deleteStudentByScholarNumber();
            break;
        case 6:
            updateStudentDetails();
            break;
        case 7:
            searchByAnything();
            break;
        case 8:
            exit(0);
            break;
        }
    }
    return 0;
}