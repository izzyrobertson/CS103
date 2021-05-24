// entityTask.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Cars {
    string brand;
    string model;
    int price;
    int mileage;

    //Cars(string(Toyota), ) {

    
};

int* searchfn() {

}

Cars* input_cars(struct Cars*) {

}

int main()
{
    int i;
    struct Cars car[2];
    struct Cars* ptr, ** ptr;

    ptr = car;

    cout << ptr->brand;

    /*car[0].brand = "Toyota";
    car[0].model = "Avalon";
    car[0].instock = 5;
    car[0].price = 15000;
    car[0].weekly_payment = 75;

    car[1].brand = "BMW";
    car[1].model = "3 Series Sedan";
    car[1].instock = 3;
    car[1].price = 20000;
    car[1].weekly_payment = 100;*/
                                                              
    for (i = 0; i < 2; i++) {
        cout << "\n Enter your car brand : ";
        cin >> car[i].brand;

        cout << "\n Enter your car model : ";
        cin >> car[i].model;

        cout << "\n Enter your car mileage : ";
        cin >> car[i].mileage;

        cout << "\n Enter your selling price : $";
        cin >> car[i].price;
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

