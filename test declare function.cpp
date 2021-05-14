// test declare function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int addition(int a, int b) {
	int r;
	r = a + b;
	return r;
}

int addition(int a, int b);

int main(){
	int z;
	z = addition(6, 4);
	cout << "The result is " << z;
}


