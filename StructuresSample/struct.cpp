/*
Author: Revel Etheridge
Title: StructureSample
Date: Fall 2023
Purpose: Help the Krusty Krab record daily profits with structures, pointers, & dynamic memory allocation
*/


//PLEASE NOTE: This example uses ARRAY and NOT pointer notation!!!

using namespace std;
#include <iostream>

//structure declaration
struct KrabEnterprises
{
    int numPatties;         //number of Patties sold that day
    int numCustomers;       // number of Customers that day
    int theftAttempts;      // number of times Plankton tried to steal the formula
};

//function prototypes
void enterData(int totalDays, KrabEnterprises* recordsArray); 
void printRecords(int totalDays, KrabEnterprises* recordsArray);              

int main()
{
    //variable declarations
    int totalDays;
    KrabEnterprises* recordsArray; //pointer that will point to KrabEnterprise structures

    //getting input from user fot number of days to be logged
    cout << "\n\nWelcome to Krab Enterprises!";          
    cout << "\nHow many days will be recorded in this log?   ";
    cin >> totalDays;

    //dynamically allocating KrabEnterprise array with a size of totalDays
    recordsArray = new KrabEnterprises[totalDays];

    enterData(totalDays, recordsArray);     //get daily record data
    printRecords(totalDays, recordsArray);  //print results 

    //any time you use "new", you MUST delete that dynamic memory
    //if your struct has any dynamic memory (like an array) within it, use a forloop to delete those elements 1st
    delete [] recordsArray;     
    return 0;
}

//Uses a for loop to save daily data based on the KrabEnterprises structure (using array notation)
void enterData(int totalDays, KrabEnterprises* recordsArray)
{
    for(int i = 0; i < totalDays; i++)
    {
        //don't forget about being off by one for the user
        cout << "\n\nTotal number of patties sold on day " << i + 1 << ":  ";
        cin >> recordsArray[i].numPatties;
        cout << "\nTotal number of customers on day " << i + 1 << ":  ";
        cin >> recordsArray[i].numCustomers;
        cout << "\nTotal number of patties sold on day " << i + 1 << ":  ";
        cin >> recordsArray[i].theftAttempts;
    }
}

//prints results to user via a forloop (using array notation)
void printRecords(int totalDays, KrabEnterprises* recordsArray)
{
    for(int i = 0; i < totalDays; i++)
    {
        //don't forget to be off by one for the user
        cout << "\n\n---Day " << i + 1 << "---";
        cout << "\nNumber of patties sold: " << recordsArray[i].numPatties;
        cout << "\nNumber of customers: " << recordsArray[i].numCustomers;
        cout << "\nNumber of theft attempts from Plankton: " << recordsArray[i].theftAttempts;
    }
}



