// MatrixFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//output matrix function
void output_matrix(int a[2][2]) {
	int p, q; //local variables
	//output
	cout << "\nThe Matrix output : \n";
	for (p = 0; p < 2; p++) {
		for (q = 0; q < 2; q++) {
			cout << a[p][q] << "\t";
		}
		cout << "\n";
	}
}

// add matrices
void add_matrices(int a[2][2], int b[2][2]) {
	int c[2][2];
	int i, j; //local to add_matrices
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	output_matrix(c);
}

int main()
{
	int matA[2][2], matB[2][2], matC[2][2];
	int i, j;
	//input for Matrix A
	cout << "\n Enter the values for Matrix A : \n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cin >> matA[i][j];
		}
	}
	cout << "\n Enter the values for Matrix B : \n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cin >> matB[i][j];
		}
	}

	output_matrix(matA);//passing matrix into the function
	output_matrix(matB);

	//addition of matrix
	add_matrices(matA, matB);

	//output
	/*for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << matA[i][j] << "\t";
		}
		cout << "\n";
	}*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu