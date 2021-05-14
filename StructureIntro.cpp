// StructureInfo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

//structure is a complex type of data where a group of different data types can be called with one name

//define the structure
struct Students {
    string name;
    int age;
    string phone;
    float fees;
    string address;
};

void output_data(struct Students bse_student[5], int n) {
    int i;
    for (i = 0; i < n; i++) {
        cout << "\nThe name of student" << i + 1 << " : " << bse_student[i].name;
        cout << "\nThe fees of student" << i + 1 << " : " << bse_student[i].fees;

    }
}
void input_data() {
    struct Students bse[5];
    int i;
    for (i = 0; i < 5; i++) {
        cout << "\nEnter the name of student" << i + 1 << " : ";
        cin >> bse[i].name;
        cout << "\nEnter the fees of student" << i + 1 << " : ";
        cin >> bse[i].fees;
    }
    output_data(bse, 5);
}

int main()
{
    //int i;
    //struct Students bse[5];

    /*bse.name = "John";
    bse.age = 9;
    bse.phone = "0212304364";
    bse.fees = 6950;
    bse.address = "182 Sum Street";*/

    /*cout << "\nName : " << bse.name;
    //cout << "\nPhone Number : " << bse.phone;
    cout << "\nAddress : " << bse.address;*/

    /*/input
    for (i = 1; i < 3; i++) {
        cout << "\nEnter the student\'s name : ";
        cin >> bse[i].name;
        cout << "\nEnter the student\'s age : ";
        cin >> bse[i].age;
    } 
    //output
    for (i = 1; i < 3; i++) {
        cout << "\n\nStudent " << i << ". Name : " << bse[i].name;
        cout << "\n\t Age : " << bse[i].age;
    }*/

    input_data();




}