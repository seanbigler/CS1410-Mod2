// File: Loops2
// Created by Sean Bigler on 9/25/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;

// Constants


// Prototypes


// Main Program Program
int main()
{
    int i = 40;
    int j = 10;

    //Comparison
    // i == j False
    // i > j True
    // i != j True
    // (7 < i) True
    // (7 < i || j < 20
    // (0) False by definition
    // (-44) True by definition

    while (i < 20)
    {
        cout << "i is " << i << endl;
        i++;
        if(i == 13)
        {
            break; //exit while loop
        }

    }

    for (int m = 0; m < 6; m++)
    {
        cout << "m is " << m << endl;
    }

    // Multiple initializations in FOR loops
    for(int j = 0, i = 9; j < 20 || i > 10; j++, i--)
    {
        cout << "i:" << i << " j:" << j << endl;
    }

    // Another example: Task, loop over the first
    // 20 numbers, but print only those that are
    // even numbers
    for (int i = 1; i <= 20; i++)
    {
        if(i % 2 != 0)  // Check if number is odd
        {
            continue;  //Takes you to the top of the loop
        }
        cout << i << " is even" << endl;
    }

    // DO WHILE loop
    // Task: Create a DO WHILE loop that asks
    // the user for two inputs: dividend and divisor
    // continue asking/displaying the values
    // until enter char 'n'
    char answer;
    int x = 0;
    int y = 0;
    do
    {
        cout << "Please enter the dividend" << endl;
        cin >> x;
        cout << "Please enter the divisor" << endl;
        cin >> y;
        cout << x << " divided by " << y << " = " << x/y << endl;
        cout << "With remainder = " << x % y << endl;
        cout << "Would you like to do it again (y/n)?" << endl;
        cin >> answer;
    }while(answer != 'n');






    return 0;
}
// Function Definitions