/*
Author: Revel Etheridge
Title: OnionStruct.cpp
Purpose: Keep track of troops/gunships on Mandalore
*/

//standard libraries
#include <iostream>
using namespace std;

//structure definitions

//struct for each Gauntlet (gunship that carries Mando's into battle)
struct Gauntlet
{
    string shipName;
    string condition;
    int numTroops;
};

//struct for info on each Mando being carried
struct Mando
{
    string mandoName;
    int age;
};

int main()
{
    //Variable declarations
    Gauntlet * gauntlets;
    Mando ** mandos;
    int numGauntlets;
    int largestCount;
    int largestIndex;
    int oldestIndexShip;
    int oldestIndexTroop;
    int tempAge;

    cout << "\nACCESS GRANTED";
    cout << "\nEnter number of Guantlet transports: ";
    cin >> numGauntlets;
    cin.ignore();
    //dynamically allocating arrays
    gauntlets = new Gauntlet[numGauntlets];
    mandos = new Mando*[numGauntlets];

    //getting user input
    for(int i = 0; i < numGauntlets; i++)
    {
        //First layer of data entry
        cout << "\n\n-Ship " << i + 1 << " data entry-";
        cout << "\nShip " << i + 1 << " name: ";
        getline(cin, gauntlets[i].shipName);
        cout << "Ship " << i + 1 << " condition: ";
        getline(cin, gauntlets[i].condition);
        cout << "Ship " << i + 1 << " troop count: ";
        cin >> gauntlets[i].numTroops;
        cin.ignore();

        //Second layer of data entry
        //creating an array for each ship to hold troop info
        mandos[i] = new Mando[gauntlets[i].numTroops];

        cout << "\n\t-Ship " << i + 1 << " troop data entry-";
        for(int j = 0; j < gauntlets[i].numTroops; j++)
        {
            //i index indicates the ship number and j represents troop number
            cout << "\n\tMandalorian " << j + 1 << " name: ";
            getline(cin, mandos[i][j].mandoName);
            cout << "\n\tMandalorian " << j + 1 << " age: ";
            cin >> mandos[i][j].age;
            cin.ignore();
        }
    }

    //Finding ship with most Mandalorians
    largestCount = gauntlets[0].numTroops;
    for(int a; a < numGauntlets; a++)
    {
        if(largestCount < gauntlets[a].numTroops)
        {
            //updating largest number of Mandalorians
            largestCount = gauntlets[a].numTroops;
            //saving which ship had the biggest number
            largestIndex = a;
        }
    }

    //Finding the oldest Mandalorian
    int oldestAge = mandos[0][0].age;
    //outer loop iterates through each ship
    for(int b = 0; b < numGauntlets; b++)
    {
        //inner loop iterates through each troop
        for(int c = 0; c < gauntlets[b].numTroops; c++)
        {
            if(oldestAge < mandos[b][c].age)
            {
                //updating the oldest age
                oldestAge = mandos[b][c].age;
                oldestIndexShip = b;
                oldestIndexTroop = c;
            }
        }
    }

    //printing results to users
    cout << "\nShip " << largestIndex + 1 << ", " << gauntlets[largestIndex].shipName << ", has the most troops (";
    cout << largestCount << ") and is in " << gauntlets[largestIndex].condition << " condition";
    cout << "\nThe oldest Mandalorian is named " << mandos[oldestIndexShip][oldestIndexTroop].mandoName << " and is " << oldestAge;

    //deleting dynamically allocation
    for(int x = 0; x < numGauntlets; x++)
    {
        delete [] mandos[x];
    }
    delete [] mandos;
    delete [] gauntlets;

    return 0;
}

