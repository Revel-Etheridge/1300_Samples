/*
Author: Revel Etheridge
Title: HeaderSample
Date: 10/18/22
Purpose: Outline the basics of header files
*/

//Your header file will contain only libraries and prototypes

//before you begin any code, make sure to include guards! (Don't forget #endif at the end)
#ifndef HEADER_H 
#define HEADER_H

//libraries used in your program should only be included in the header
#include <iostream>
using namespace std;

//in this prototype, the add function will receive two respective integers and return one integer
//int clarifies the return type, add is the name of the function, and the two ints set our parameters
int add(int, int); 

//Don't forget your end guard!!
#endif