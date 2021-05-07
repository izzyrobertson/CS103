// SumFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void add_values(float m, float n) {
    cout << "\n Sum of the two given values is : " << (m + n);
}
//add two numbers using a function
int main()
{
    float x = 5, y = 6;
    //add_values(x, y); // passing x and y into the function
    add_values(5, 6);
    add_values(3, 9);
    add_values(10, 20);
    add_values(1234, 7263);
}
