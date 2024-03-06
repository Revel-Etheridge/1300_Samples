/*
Author: Revel Etheridge
Title: HeaderSample
Date: 10/18/22
Purpose: Outline the basics of header files
*/

//Your functions file will contain definitions for the function prototypes in your header

//Inclue iostream and the header file for the files to be able to communicate
#include "header.h"

//Through this function definition, we will take the sent values a and b, respectively, and return their sum
//int designates our return value, add is the name of the function, and integers a and b are our arguments
int add(int a, int b) 
{
    int c;      //create integer to hold the sum
    c = a + b;  //calculate the sum
    return c;   //return the sum
}