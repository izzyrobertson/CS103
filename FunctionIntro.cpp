// FunctionIntro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

// function definition
// void means nothing is returned from the function

//void greet_someone() {
//    cout << "\n Hello World!\n";
//}

//float x_value() {
//    float x;
//    cout << "Enter the value of x: ";
//    cin >> x;
//    return x;
//}
//float y_value() {
//    float y;
//    cout << "Enter the value of y: ";
//    cin >> y;
//    return y;
//}
//void add_numbers() {
//    //float x, y;
//    //cout << "\n Enter two numbers to add: \t";
//    //cin >> x >> y;
//    float x, y;
//    x = x_value();
//    y = y_value();
//    cout << "\n The sum of the two numbers is : \t" << (x + y);
//}
//
//void diff_numbers() {
//    float x, y;
//    cout << "\n Enter two numbers to find the difference: \t";
//    cin >> x >> y;
//    cout << "\n The difference of the two numbers is : \t" << (x - y);
//}
//
//void multi_numbers() {
//    float x, y;
//    cout << "\n Enter two numbers to multiply: \t";
//    cin >> x >> y;
//    cout << "\n The multiplication of the two numbers is : \t" << (x * y);
//}

void upper_triangle() {
    int i, j;
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
    return;
}
void lower_triangle(){
    int i, j;
    for (i = 1; i <= 2; i++) {
        for (j = 2; j >= i; j--) {
            cout << "* ";
        }
        cout << "\n";
    }
    return;
}

int main()
{
    //greet_someone(); //function call

    //add_numbers();
    //diff_numbers();
    //multi_numbers();
    upper_triangle();
    lower_triangle();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
