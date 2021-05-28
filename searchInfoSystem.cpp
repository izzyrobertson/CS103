// searchInfoSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream> //using files to store and retrieve
using namespace std;

struct Student{
    string id;
    string name;
    int age;

    //constructor (same name as structure)
    Student(string d="100", string n="John", int a=30) {
        id = d;
        name = n;
        age = a;
    }
};

struct Student* input_details(struct Student* ptr) {
    for (int i = 0; i < 3; i++) {
        cout << "\nEnter the ID of the student : ";
        cin >> ptr->id;
        cout << "\nEnter the name of the student : ";
        cin >> ptr->name;
        cout << "\nEnter the age of the student : ";
        cin >> ptr->age;
        ptr++; //DON'T forget to increment the pointer so the that it does not show just the last value and override the rest
    }
    return(ptr);
}

void  output_details(struct Student* ptr) {
    for (int i = 0; i < 3; i++) {
        cout << "\nID : " << ptr->id << endl;
        cout << "\tName : " << ptr->name << endl;
        cout << "\tAge : " << ptr->age << endl;
        ptr++;
    }
}

int main()
{
    struct Student s[3]; //array of structure
    struct Student* p = s; //pointer for Student array of structure

    //reading the values of the constructor

    cout << "\nID : " << p->id;
    cout << "\nName : " << p->name;
    cout << "\nAge : " << p->age;

    //using function with pointer for array of structure to take input from the user
    input_details(p);

    //using a function with pointer returned from input_details function to output details
    output_details(p);

    //writing to the file
    fstream my_file;

    //open the file
    my_file.open("student.txt", ios::out);

    //wrte all the input data into the file
    int i;
    for (i = 0; i < 3; i++) {
        my_file << p->id << "\t";
        my_file << p->name << "\t";
        my_file << p->age << endl;
        p++;
    }
    cout << "\nStored details into the file" << endl;
    my_file.close();

    cout << "\nRetreiving data from the file" << endl;

    //opening file to retrieve data
    my_file.open("student.txt", ios::in);

    string store_detail, what_id;
    cout << "\nPlease enter the id of the student you want : ";
    cin >> what_id;
    int flag = 0;
    while (getline(my_file, store_detail)) {
        string subs = store_detail.substr(0, 3);

        cout << "Line of data from the file : " << store_detail << endl;
        if (subs == what_id) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) {
        cout << "\n Record of student found";
    }
    else {
        cout << "\n Record of student not found";
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
