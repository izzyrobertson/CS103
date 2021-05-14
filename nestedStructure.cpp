// nestedStructure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

//structure for authors
struct Authors {
    string first_author;
    string second_author;
    string third_author;
};

struct Books {
    long int isbn;
    string title;
    Authors author; //defined earlier
    float cost;
    int copies;
};

int main()
{
    int i;

    struct Books book[2];

    book[0].isbn = 78787834;
    book[0].title = "C++ Programming";
    book[0].author.first_author = "Author 1";
    book[0].author.second_author = "Author 2";
    book[0].author.third_author = "Author 3";
    
    for (i = 0; i < 2; i++) {
        cout << "Enter the isbn of the book : ";
        cin >> book[i].isbn;

        cout << "\nEnter the title of the book : ";
        getline(cin, book[i].title);
        cin.ignore();

        cout << "\nEnter the first author of the book : ";
        getline(cin, book[i].author.first_author);

        cin.ignore();
        cout << "\nEnter the second author of the book : ";
        getline(cin, book[i].author.second_author);

        cin.ignore();
        cout << "\nEnter the third author of the book : ";
        getline(cin, book[i].author.third_author);

        cout << "\nEnter the cost of the book : ";
        cin >> book[i].cost;

        cout << "\nEnter the number of copies of the book : ";
        cin >> book[i].copies;
        
    }

    //output
    for (i = 0; i < 2; i++) {
        cout << "\nISBN : " << book[i].isbn;
        cout << "\nTITLE : " << book[i].title;
        cout << "\nAUTHORS  : "
            << book[i].author.first_author << ", "
            << book[i].author.second_author << ", "
            << book[i].author.third_author << endl;
        cout << "\nCOST : " << book[i].cost << endl;
        cout << "\nCOPIES : " << book[i].copies << endl;
    }
   
    

}
