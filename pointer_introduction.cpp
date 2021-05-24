// pointer_introduction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int* addingToArray(int b[], int n) {
    for (int i = 0; i < n; i++) {
        b[i] += 5;
    } return b;
}

int main()
{
    /*int age1, age2;
    int* ptra1;
    int* ptra2;

    //cout << "\n Your age is : " << age;
    //cout << "\n Pointer value : " << *ptra;
    //cout << "\n Memory address : " << ptra;

    ptra1 = &age1;
    ptra2 = &age2;
    cout << "\n What is your age? : ";
    cin >> age1;
    cout << "\n What is your age? : ";
    cin >> age2;
    cout << "\n The average of the two ages is : " << (*ptra1 + *ptra2)/2;*/
    
    //arrays
    int a[5] = { 1,2,3,4,5 };
    int* ptra;

    ptra = addingToArray(a, 5);

    for (int i = 0; i < 5; i++) {
        cout << "\nArray value and corresponding memory address : " << *(ptra + i) << " + " << ptra + i << endl;
    }
    for (int i = 0; i < 5; i++) {
        cout << "\n" << (*ptra + i) << "\t" << (ptra + i);
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

