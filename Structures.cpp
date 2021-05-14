// Structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct Books {
    int isbn;
    string title;
    string author;
    float cost;
    int copies;
};



int main()
{
    int i;
    struct Books db[3];

    for (i = 0; i < 1; i++) {
        cout << "\nEnter the books isbn : ";
        cin >> db[i].isbn;
        cout << "\nEnter the books title : ";
        getline(cin, db[i].title);
        cout << "\nEnter the books author : ";
        getline(cin, db[i].author);
        cout << "\nEnter the books cost : ";
        cin >> db[i].cost;
        cout << "\nEnter the books copies : ";
        cin >> db[i].copies;
        cin.ignore();
    } 
    for (i = 0; i < 1; i++) {
        cout << "\nISBN : " << db[i].isbn;
        cout << "\nTitle : " << db[i].title;
        cout << "\nAuthor : " << db[i].author;
        cout << "\nCost : " << db[i].cost;
        cout << "\nCopies : " << db[i].copies;
    }




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

