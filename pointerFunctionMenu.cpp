// pointerFunctionMenu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int* searchfn(int b[], int n) {
    cout << "Which age would you search : ";
    cin >> n;
    return ;
}

void sortfn() {

}

void filterfn() {

}

int main()
{
    int age[3] = { 5, 10, 15 };
    int* ptr1;
    int* ptr2;
    int* ptr3;
    int i;

    ptr1 = searchfn(age,3);
    int choice;

    cout << "\n Ages of people :";
    for (i = 0; i < 3; i++) {
        cout << "\n " << i << ". " << age[i];
    }
    cout << "\n\n\t 1.Search \t 2.Sort \t 3.Filter \t 4.Exit" << endl;
    cout << "\n\n\t Select Option Number : ";
    cin >> choice;

    switch (choice) {
    case 1 :
        searchfn();
        cout << "\n Variable value :" << ptr1;
        cout << "\n Variable memeory address : " << *ptr1;
        break;
    case 2 :
        sortfn();
        break;
    case 3 : 
        filterfn();
        break;
    case 4 :
        break;
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
