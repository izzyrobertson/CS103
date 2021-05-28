// readFile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include<string>
using namespace std;



int main()
{
	//open a newfile for input/output operations, discarding any current in the files (assumes a length of zero on opening)
	fstream myFile("myFile.txt", ios::in | ios::out | ios::trunc);

	//add the characters learning file handling in c++ to the file
	myFile << "learning file handling in c++";

	//seek to 6 characteres from the beginning of the file
	myFile.seekg(9, ios::beg);

	//read the next 5 characters from the file into a buffer
	char A[14];
	myFile.read(A, 13);

	//end the buffer with a null terminating chracter
	A[13] = 0;

	//output the contgents read from the file and close it
	cout << A << endl;
	myFile.close();

	/*char data[100];

	ofstream outfile; //open a file in write mode.
	outfile.open("c:/Users/270112252/OneDrive - UP Education/Desktop/CS103/fileWrite/fileWrite/myFile.txt");

	cout << "Writing to the file" << endl;
	cout << "Enter your name : ";
	cin.getline(data, 100);

	outfile << data << endl; //write inputted data into the file
	
	cout << "Enter your age : ";
	cin >> data;
	cin.ignore();
	
	outfile << data << endl; //again write inputted data into the file

	outfile.close(); //close the open file.

	//open file in read mode
	ifstream infile;
	infile.open("c:/Users/270112252/OneDrive - UP Education/Desktop/CS103/fileWrite/fileWrite/myFile.txt");

	cout << "Reading from the file" << endl;
	infile >> data;
	
	cout << data << endl; //write the data on the screen

	//again read the data from the file and display it
	infile >> data;
	cout << data << endl;

	infile.close(); //close the opened file
	*/

	/*ifstream infile;
	string myData;
	infile.open("c:/Users/270112252/OneDrive - UP Education/Desktop/CS103/fileWrite/fileWrite/myFile.txt", ios::in);
	getline(infile, myData);//get string data from the file and store it in myData variable;
	while (getline(infile, myData)) {
		cout << myData << endl;
	}
	infile.close();
	cout << "file is closed after reading";
	*/
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
