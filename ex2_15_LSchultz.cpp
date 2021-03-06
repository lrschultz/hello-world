﻿// ex2_15_LSchultz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//CS131 Exercise 2.15
//Lisa Schultz 10/3/2018

#include "pch.h"
#include <iostream> //allows program to perform input and output
using namespace std; //program uses names from the std namespace

//testing the branching function

int main()
{
    cout << "Hello, for Exercise 2.15, we will examine the order of operations for mathematical expressions.\n\n"; 
	
	// Exercise 2.15(a)
	// The predicted value based on the order of operation is x = 15
	cout << "Our first expression is x = 7 + 3 * 6 / 2 - 1 \n";
	cout << "The multiplication and division will be completed first in order of left to right, \n";
	cout << "and then the addition and subtraction will be completed in the same order. \n";
	cout << "The predicted value of x is 15.  The calculated value of x is: \n\n";
	cout << "x = " << 7 + 3 * 6 / 2 - 1 << "\n\n";

	// Exercise 2.15(b)
	// The predicted value based on the order of operation is x = 3
	cout << "Our second expression is x = 2 % 2 + 2 * 2 - 2 / 2 \n";
	cout << "The order of operations is similar to the first expression. \n";
	cout << "The modulus operator will be completed first with the multiplication and division, left to right. \n";
	cout << "The predicted value of x is 3.  The calculated value of x is: \n\n";
	cout << "x = " << 2 % 2 + 2 * 2 - 2 / 2 << "\n\n";

	// Exercise 2.15(c)
	// The predicted value based on the order of operation is x = 324
	cout << "Our last expression is x = ( 3 * 9 * ( 3 + ( 9 * 3 / ( 3 ) ) ) ) \n";
	cout << "The order of operations is similar to the previous expression, except that the operations inside the parenthesis will occur first. \n";
	cout << "The order will start with the innermost parenthesis going outward. \n";
	cout << "The predicted value of x is 324.  The calculated value of x is: \n\n";
	cout << "x = " << (3 * 9 * (3 + (9 * 3 / (3)))) << "\n\n";
}
