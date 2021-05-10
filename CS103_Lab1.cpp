// CS103_Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void welcome_message() {
    cout << "------------------------------------------------------------------\n";
}

void draw_hangman() {
    cout << "   ____" << endl;
    cout << "  |    |" << endl;
    cout << "  |    O" << endl;
    cout << "  |   \\|/" << endl;
    cout << "  |    |" << endl;
    cout << "  |   / \\" <<endl;
    cout << "  |" << endl;
    cout << "  |" << endl;
    cout << "-----";
}



void invert_hangman() {
    cout << "\n   ____" << endl;
    cout << "  |    |" << endl;
    cout << "  |   /|\\ " << endl;
    cout << "  |    |" << endl;
    cout << "  |   /|\\" << endl;
    cout << "  |    O" << endl;
    cout << "  |" << endl;
    cout << "  |" << endl;
    cout << "-----";
}

void walk_man() {
    cout << "\n     O" << endl;
    cout << "    \\|/" << endl;
    cout << "     |" << endl;
    cout << "    / \\" << endl;
}

int main()
{
    int i;
    char guess;
    cout << "Welcome to play hangman. This game is to check your spelling skill\n";
        
    welcome_message();
    draw_hangman();



    //play(guess); //assign to variable called answer, play() returns if player is correct or wrong after 3 guesses
    invert_hangman();
    walk_man();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
