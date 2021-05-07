// matrixNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
    int randNum, i=0, j;
    float sqNum, sqRoot;
    double matrix[10][10];

    srand((unsigned)time(0));

    while (i < 5) {
        randNum = ((rand()) % 10) + 1;

        for (j = 0; j <= i; j++) {
            if (!(randNum == matrix[j][0])) {
                matrix[i][0] = randNum;
                i++;
                break;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        matrix[i][1] = (matrix[i][0]) * (matrix[i][0]);
        matrix[i][2] = sqrt(matrix[i][0]);
    }
    cout << " ----                                         ---\t\n";

    cout << "|                                            \t|";

    cout << "\n| Rand_Num     Squares     \tSquare_Roots \t|\n";



    for (i = 0; i < 5; i++) {

        cout << "| ";

        for (j = 0; j < 3; j++) {

            cout << matrix[i][j] << "\t\t";

        }

        cout << "|\n";

    }

    cout << "|                                            \t|\n";

    cout << " ----                                         ---\n\n";

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


