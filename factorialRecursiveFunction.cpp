// factorialRecursiveFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int fact(int x) {
    if (x <= 1)
        return (1);
    else
        return (x * fact(x - 1));

}

int main()
{
    int n;
    //input
    cout << "Enter the value of n to find the factorial : ";
    cin >> n;
    //calling function for the output
    cout << "\nThe factorial of " << n << " is " << fact(n);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
