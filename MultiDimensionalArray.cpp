// MultiDimensionalArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //string students[5][2] = { "John", "16", "Bob", "14", "Jin", "40", "Phil", "44", "Jimmy", "12" };
    
    string workHours[7][2];
    int i, j;

    cout << "Please enter the week days and the number of hours worked";
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 2; j++) {
            cin >> workHours[i][j];
        }
    }

    for (i = 0; i < 7 ; i++) { // referes to rows
        for (j = 0; j < 2; j++) { // refers to columns
            cout << workHours[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\n";
    return 0;
    
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
