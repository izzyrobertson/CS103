// lab_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Employees {
    int id;
    string firstName, middleName, lastName;
};

int main()
{
    int i;

    cout << "Enter Week Start Date : 10/5/2021";
    cout << "Enter Week End Date : 14/5/2021";

    //Input
    for (i = 1; i <= 2; i++) {
        cout << "\n\n*********************************************\n\n";
        cout << "Enter information for Employee #" << i;
        cout << "\n\n*********************************************\n";

        cout << "Enter Employee ID : ";
        cout << "\nEnter First Name : ";
        cout << "\nEnter Middle Initials : ";
        cout << "\nEnter Last Name : ";
        cout << "\nEnter Street Address : ";
        cout << "\nEnter Suburb : ";
        cout << "\nEnter City : ";
        cout << "\nEnter Contact Number : ";
        cout << "\nEnter Email Address : ";
        cout << "\nEnter IRD Number";
        cout << "\nEnter Tax Code : ";
        cout << "\nEnter Hours Worked : ";
        cout << "\nEnter Hourly Rate : ";
        cout << "\nEnter Tax Rate : ";
    }

    //Pay slip
    for (i = 1; i <= 2; i++) {
        cout << "\n\n*********************************************\n\n";
        cout << "PAY SLIP for Week starting on 10/5/2021 and Ending on 14/5/2021";
        cout << "\n\n*********************************************\n";

        cout << "Employee ID    : ";
        cout << "\nFull Name      : ";
        cout << "\nAddress        : ";
        cout << "\nContact Number : ";
        cout << "\nEmail Address  : ";
        cout << "\nIRD Number     : ";
        cout << "\nTax Code       : ";
        cout << "\nHours Worked   : ";
        cout << "\nHourly Rate    : ";
        cout << "\nTax Rate       : ";
        cout << "\nGross Pay      : ";
        cout << "\nTax Deducted   : ";
        cout << "\nNet Pay        : ";
    }

    //Weekly report
    cout << "\n\n*********************************************\n\n";
    cout << "Weekly Statistics for Week starting on 10/5/2021 and Ending on 14/5/2021";
    cout << "\n\n*********************************************\n";

    cout << "Total Amount paid in Gross Pay : ";
    cout << "\n\nTotal Amount deducted in Tax   : ";
    cout << "\n\nTotal Amount paid in Net Pay   : ";

    cout << "\n\n\n*********************************************\n";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

