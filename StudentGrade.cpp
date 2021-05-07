// StudentGrade.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
/*
string student_grade(int m){
    if (m >= 50) {
        return ("Passed"); // Returns the given string to the main function
    }
    else {
        return("Failed"); // Returns the given string to the main function
    }
}

int main()
{   
    int x;
    cout << "\t Enter your grade : ";
    cin >> x;
    string result = student_grade(x); // Assigning the reutrn value of the function to a variable

    cout << "\n " << result;
} */

//Algorithm
/*
1. input name and 3 grades (x,y,z)
2. call find_sum(x,y,z) and store it in sum
3. call find_avg(sum) and store it in avg
4. call find_resulting(avg) and output the result
*/

float find_sum(float p, float q, float r) {
    return (p + q + r);
}

float find_avg(float s) {
    return (s / 3);
}

void find_results(string n, float a) {
    if (a >= 80 && a <= 100) {
        cout << "\n Hi " << n << "! Congratulations, You have passed in distinction";
    }
    else if (a < 50 && a >= 0) {
        cout << "\n Hi " << n << "! Sorry, You have failed the examinations";
    }
    else
        cout << "\n Hi " << n << "! Congratulations, You have passed";
}

int main()
{
    string name;
    float x, y, z, sum, avg;

    cout << "PLease enter your name and 3 grades (in the range of 0 to 100) : ";
    cin >> name >> x >> y >> z;

    cout << name << "\t" << x << "\t" << y << "\t" << z;
    
    sum = find_sum(x, y, z);
    cout << "\n The sum is : " << sum;

    avg = find_avg(sum);
    cout << "\n The averge is : " << avg;

    find_results(name, avg);
} 
