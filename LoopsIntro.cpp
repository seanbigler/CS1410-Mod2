// File: LoopsIntro
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
    int i = 10;
    while(i < 20)
    {
        cout << "i is " << i << endl;
        i++; // Increment the value of the sentinel
        if(i == 13)
        {
            break; // Exit while loop
        }
    }
    return 0;
}

// Function Definitions