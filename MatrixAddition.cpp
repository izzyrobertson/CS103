// MatrixAddition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a[2][2], b[2][2], c[2][2];
    int i, j;

    //input for matrix a
    cout << "Please enter 4 integar values for matrix A \n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }
    //input for matrix b
    cout << "Please enter 4 integar values for matrix B \n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cin >> b[i][j];
        }
    }

    //output for martix a
    cout << "matrix A \n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    //output for martix b
    cout << "matrix B \n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << b[i][j] << "\t";
        }
        cout << "\n";
    }

    //Matrix Addition: Resultant Matrix C
    cout << "matrix C \n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << a[i][j] * b[i][j] << "\t";
        }
        cout << "\n";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
