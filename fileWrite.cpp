// fileWrite.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Writing into the file
#include <iostream>
#include <fstream> //Must be included to handle files
#include <string>
using namespace std;

int main()
{
    ofstream outfile;//ofstream is a datatype and outfile is user set name

    //opening file with out mode
    outfile.open("myFile.txt", ios::app);
    //outfile("name of file");
    string name = "john";
    int age = 25;
    outfile << name;
    outfile << age;
    string inname;
    int inage;
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter the name : ";
        cin >> inname;
        cout << "\nEnter the age :";
        cin >> inage;

        outfile << inname;
        outfile << inage;
    }
    cout << "file is written with the given information" << endl;
    outfile.close(); //closes the file
    cout << "file is closed for operation" << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
