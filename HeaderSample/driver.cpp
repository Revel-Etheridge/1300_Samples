/*
Author: Revel Etheridge
Title: HeaderSample
Date: 10/18/22
Purpose: Outline the basics of header files
*/

//Your driver will contain the meat of your code

//include iostream and the header file so our various files can communicate
#include "header.h"

int main()
{
    int a, b, c;    //creating all necessary variables

    //get first value from user
    cout << "\nEnter your first integer:  ";
    cin >> a;

    //get second value from user
    cout << "\nEnter your second integer:  ";
    cin >> b;

    //call the add function, send our two values, and assign the return value to c
    c = add(a, b);

    //printing our results
    cout << "\nThe sum of " << a << " and " << b << " is " << c;

    return 0;
}