// File: Sean_Bigler_Hw1_Task1
// Created by Sean Bigler on 9/25/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;

// Constants
const float INCHES_PER_FOOT = 12;
const float METERS_PER_INCH = 0.0254;
const float KG_PER_LB = 2.2;

// Prototypes


// Main Program Program
int main()
{
    float feet = 0;
    float inches = 0;
    float lbs = 0;
    float heightMeters = 0;
    float kg = 0;
    float BMI = 0;
    //Get input from user for feet, inches, and lbs
    cout << "This program calculates your Body Mass Index (BMI)" << endl;
    cout << "Enter your height in feet and inches" << endl;
    cout << "First, enter the feet:" << endl;
    cin >> feet;
    cout << "Now enter the inches:" << endl;
    cin >> inches;
    cout << "Next, enter your weight in pounds:" << endl;
    cin >> lbs;
    // Calculate total height in meters
    heightMeters = METERS_PER_INCH * ((feet * INCHES_PER_FOOT) + inches);
    // Calculate total weight in kg
    kg = lbs / KG_PER_LB;

    // Calculate BMI
    BMI = (kg/(heightMeters * heightMeters));

    //Print BMI
    cout << "Your BMI = " << BMI << endl;

    return 0;
}

// Function Definitions