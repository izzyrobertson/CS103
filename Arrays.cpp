
// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string names[5] = { "John", "Bob", "Fob", "Tom", "Jin" };
    int i;

    for (i = 0; i < 5; i++) {
        cout << names[i] << "\n";
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

