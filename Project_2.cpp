//*************************************************************************
// Author: Jacob Shirts
// This progrram takes a file with three employee's names, current slary,
// and percent pay increase. Then reads the file and outputs the names and 
// salaries after the pay increase into a new file.
//*************************************************************************

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// Purpose: open and read file Ch3_Ex6Data.txt, find first and last names of empoloyees, current pay, and 
// pay increase percentage. Write new file called Ch3_Ex6Output.dat write the first and last names of 
// employees and their pay after the increase.
int main()
{
    // Assign input and output variables
    ifstream inFile;
    ofstream outFile;

    // Assign the rest of the variables
    string firstName; // First name of employee
    string lastName; // Last name of employee
    double currentSalary; // Employee current salary
    double increaseRate; // Employee pay increase percent
    double updatedSalary; // Employee new salary after pay increase

    // Open neccecary files
    inFile.open("Ch3_Ex6Data.txt"); // Open the file we are reading from
    outFile.open("Ch3_Ex6Output.dat"); // Create a new file to write to 

    // Round all numbers to two decimal places in output file
    outFile << fixed << showpoint << setprecision(2); 
    
    // Get first employee info and calculate salary increase
    inFile >> lastName >> firstName;
    inFile >> currentSalary >> increaseRate;
    updatedSalary = currentSalary * (1+increaseRate / 100);
    
    // Output first employee info
    outFile << firstName << " " << lastName << " " << updatedSalary << endl;

    // Get second employee info and calculate salary increase
    inFile >> lastName >> firstName;
    inFile >> currentSalary >> increaseRate;
    updatedSalary = currentSalary * (1 + increaseRate / 100);

    // Output second employee info
    outFile << firstName << " " << lastName << " " << updatedSalary << endl;

    // Get third employee info and calculate salary increase
    inFile >> lastName >> firstName;
    inFile >> currentSalary >> increaseRate;
    updatedSalary = currentSalary * (1 + increaseRate / 100);

    // Output third employee info
    outFile << firstName << " " << lastName << " " << updatedSalary << endl;

    // // Alternatively get all 3 employee's data with a loop
    // int n = 0;
    // while(n < 3)
    // {
    //     // Get employee info and calulate salary increase
    //     inFile >> lastName >> firstName;
    //     inFile >> currentSalary >> increaseRate;
    //     updatedSalary = currentSalary * (1+increaseRate / 100);
    
    //     // Output first employee info
    //     outFile << firstName << " " << lastName << " " << updatedSalary << endl;

    //     // Increment counter
    //     n += 1;
    // }
    
    return(0);
}