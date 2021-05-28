// CS103_lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int menu() {
    int opt;

    cout << "\nTwo Players Dice Game-- Pre set Maximum Score";
    cout << "\n************************************************";

    cout << "\n\n1. Instruction";
    cout << "\n2. Set Maximum Score";
    cout << "\n3. Ready Players";
    cout << "\n4. Play";
    cout << "\n5. Display ScoreBoard";
    cout << "\n6. End";

    cout << "\n\nEnter your option : ";
    cin >> opt;
    return opt;
}

void instruct() {
    cout << "\n\t\tInstruction" << endl;
    cout << "\n*****************************************************" << endl;
}

struct Player {

};

struct dice {

};

int main()
{
    int option;

    option = menu();


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
