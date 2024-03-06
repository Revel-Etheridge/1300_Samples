/*
Name: Revel Etheridge & Ben Coates
Date: October 4, 2022
Section: CSC 1300-000
Purpose: Show basics of outputting to a file
*/

#include <iostream>
/*make sure to include the fstream library.
It will be neccessary for creating output files or reading input files*/
#include <fstream>
using namespace std;

//main function will be established like normal
int main()
{
    //1st, create an ofstream variable just like how you would declare an int;
    ofstream outFile;

    /*2nd, open the file. This will find a file of a given name and if not found, will make it.
    In this instance, we are calling the output file "fileName." You will, at some point, only 
    accept files of certain name specifications, so keep that in mind.*/
    outFile.open("fileName");

    /*3rd, ow that our output file has been established and opened, we will treat it just like a cout statement.
    It is also good practice to utilize functions to ensure the file correctly opened*/
    outFile << "\nOutput file works!" << endl;

    //4th, make sure the output file closes. Using a function to check this would also be a great idea. 
    outFile.close();

    return 0;
}

/*
Wanted to give quick credit to Ben Coates for the original output sample, thank you!
I made this sample because his worked so well and I wanted to help out other sections.
If this was helpful make sure to send him a quick thank you =^)
*/