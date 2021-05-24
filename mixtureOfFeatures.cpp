// mixtureOfFeatures.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Using array of structures with pointer,
//Passing pointer into a function and returning a pointer

#include <iostream>
#include <string>
using namespace std;

//Definition of structure
struct Cats {
    string breed;
    string color;
    string behaviour;
    string description;

    //constructor to initialize; keep same name as structure
    Cats(string br="Bald", string c="Black", string be="Lazy", string d="Fluffy") {
        breed = br;
        color = c;
        behaviour = be;
        description = d;
    }
};

Cats* input_cats(struct Cats*p) {
    cout << "\n Enter the cat breed : ";
    cin >> p->breed;

    cout << "\n Enter the cat color : ";
    cin >> p->color;

    cout << "\n Enter the cat behaviour : ";
    cin >> p->behaviour;

    cout << "\n Enter the cat description : ";
    cin >> p->description;

    return p;
}

int main()
{
    struct Cats cat[2];
    struct Cats* ptr, **pptr;

    ptr = cat;
    pptr = &ptr;

    cout << "The memory address of cat array begins at " << ptr << endl;
    cout << "The memory address of the pointer to the pointer " << pptr << endl;

    //accessing members of the structure array variable with pointers
    cout << "\n Breed       : " << ptr->breed << endl;
    cout << "\n Color       : " << ptr->color << endl;
    cout << "\n Behaviour   : " << ptr->behaviour << endl;
    cout << "\n Description : " << ptr->description << endl;
    
    //passing the pointer to the array of structures into the function
    input_cats(ptr);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

