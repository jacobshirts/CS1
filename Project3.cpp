/*************************************************************************
Author: Jacob Shirts
Instructor: Iveta Holeckova
Class: CSC 1060
Description: This progrram mimics a calculator by taking two numbers from the user and then prompting the 
user to choose whether the program adds, subtracts, multiplies or divides the two numbers. Then the program
performs the desired operation and outputs the result.
*************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

main()
{
    // Define variables
    int num1;
    int num2;
    char inputOperator;

    // Prompt user for two numbers to perform operation with
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Prompt user for math operation
    cout << "Enter operator: + (addition), - (subtraction), * (multiplicaton), / (division): ";
    cin >> inputOperator;

    // Output the numbers and selected math opperator to the user 
    cout << num1 << " " << inputOperator << " " << num2 << " = ";

    // Perform the correct operation depending on the math operation the user inputed and output the result
    if (inputOperator == '+')
        cout << num1 + num2 << endl;
    else if (inputOperator == '-')
        cout << num1 - num2 << endl;
    else if (inputOperator == '*')
        cout << num1 * num2 << endl;
    else if (inputOperator == '/')
        // Check if user is trying to divide by zero and if so, output an error
        if (num2 == 0)
            cout << "ERROR\nCannot divide by zero" << endl;
        else
            // Convert values to float so in case division results in a decimal and round to two decimal places
            cout << setprecision(2) << static_cast<float>(num1) / static_cast<float>(num2) << endl;
            // If you just want the division to output an integer then this is how I would do it:
            // cout << num1 / num2 << endl;
    // If none of the other if statements are true then the user inputed an invalid operation
    else
        cout << "Illegal operation" << endl;
    
    return 0;
}