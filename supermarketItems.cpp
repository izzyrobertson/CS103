// supermarketItems.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void items_table() {

}

int main()
{
    int c, cp, sp, s, rol;
    string itemName;
    float matrix[2][6];

    cout << "\nEnter the item code : ";
    cin >> c;
    cout << "\nEnter the item name : ";
    cin >> itemName;
    cout << "\nEnter the item cost price : ";
    cin >> cp;
    cout << "\nEnter the item selling price : ";
    cin >> sp;
    cout << "\nEnter the item stock : ";
    cin >> s;
    cout << "\nEnter the item re-order level : ";
    cin >> rol;

    items_table();

    //item_code(); 
    //item_name(); 
    //item_cost_price();
    //item_selling_price();
    //stock();
    //re_order_level();
    //profit();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
