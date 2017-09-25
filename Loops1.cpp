// File: Loops1
// Created by Sean Bigler on 9/25/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;

// Constants
const int DAYS = 7;
const int COL = 10;

// Prototypes


// Main Program Program
int main() {
//    for (int i = 1; i <= DAYS; i++)
//    {
//        cout << i << " Day of the week" << endl;
//    }
//
//    char answer;
//    int x = 0;
//    int y = 0;
//    do
//    {
//
//        cout << "Please enter the dividend" << endl;
//        cin >> x;
//        cout << "Please enter the divisor" << endl;
//        cin >> y;
//        // Check for negative or zero divisor
//        if(y <= 0)
//        {
//            cout << "Invalid entry. Please try again" << endl;
//            continue;
//        }
//
//        cout << x << " divided by " << y << " = " << x/y << endl;
//        cout << "With remainder = " << x % y << endl;
//        cout << "Would you like to do it again (y/n)?" << endl;
//        cin >> answer;
//    }while(answer != 'n');

    /*
     * Task: Ask the user to enter a number between
       1 and 10. If not the case, prompt the user again
       On a valid input, display the pultiplication tables
       Up to the input.
       ex. if you enter 3, then display the mult. tables (rows)
       from 1 to 3 (always display 10 columns)
       */

    //Pseudocode:
    //1)Capture input
    //2)Test for valid input
    //2)Display  output

    //1)
    int num = 0;
    do {
        cout << "Enter a number between 1 and 10" << endl;
        cin >> num;
        //2)
    } while (num > 10 || num < 1);

    //3) Display multiplication tables
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= COL; j++) {
            cout << i * j << "  ";
        }
        cout << endl; //Print new line

    }

    cout << "Done" << endl;

    return 0;
}

// Function Definitions