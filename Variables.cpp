/*
Author: First Last
Date: September 21, 1978
Title: Variables.cpp
Purpose: Demonstrate variable types, along with input/output
*/

//first, we write out our includes and libraries
#include <iostream>
//using namesapce std;

/*
Please only use global variables when directly told to
later on when you have more functions than main, 
they will all be able to access your global variables.
This instance of globals is unnecessary, and is only for syntax
*/
const int numFlavors= 5;

//create our main function
int main()
{
    //at the beginning of main, we define all variables possible
    int numScoops = 0;          //integer (whole number) for number of scoops
    std::string name, container;     //strings to hold the name and type of container

    //getting user input;
    //cout statements print lines of text and variables to the user
    std::cout << "\nName of customer(first name only): ";
    std::cin >> name;
    std::cout << "\nNumber of scoops of ice cream: ";
    std::cin >> numScoops;
    std::cout << "\nWould you like a waffle cone or cup? (waffle or cup): ";
    std::cin >> container;

    //printing results back to user
    //different output types seperated by <<
    //whitespace within quotations matters!
    std::cout << "\n" << name << " wants " << numScoops << " scoops of ice cream in a " << container;

    //You'll learn more about functions soon, but for now
    //just don't forget your return 0 at the end of main
    return 0;       
}