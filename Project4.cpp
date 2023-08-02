/*************************************************************************
Author: Jacob Shirts
Instructor: Iveta Holeckova
Class: CSC 1060
Date: 4/22/2023
Description: This program takes a phone number expressed in letters and 
outputs the corresponding phone number expressed in numbers, with a hyphen
after the third digit.
*************************************************************************/


#include <iostream>

using namespace std;

int main()
{
    // Define variables to store the user input and loop counter
    char phoneStr;
    int counter = 0;
    
    // Prompt user for input
    cout << "Please enter a phone number expressed in letters: ";
    
    // Loop that runs while there is a value remaining in phoneStr to a maximum of 7 times
    while (cin.get(phoneStr) && counter < 7 ) {
        
        // Only increase the counter for valid characters
        if (phoneStr != ' ' && phoneStr >= 'A' && phoneStr <= 'z') {
            counter++; 

            // Convert any lowercase letter to uppercase.
            if (phoneStr > 'Z') {
                phoneStr = (int)phoneStr-32; 
            }
            
            // Print the hyphen after 3 digits
            if (counter == 4) {
                cout << "-"; 
            }
            
            // Convert letters to numbers
            switch (phoneStr) {
                case 'A':
                case 'B':
                case 'C':
                    cout << "2";
                    break;
                case 'D':
                case 'E':
                case 'F':
                    cout << "3";
                    break;
                case 'G':
                case 'H':
                case 'I':
                    cout << "4";
                    break;
                case 'J':
                case 'K':
                case 'L':
                    cout << "5";
                    break;
                case 'M':
                case 'N':
                case 'O':
                    cout << "6";
                    break;
                case 'P':
                case 'Q':
                case 'R':
                case 'S':
                    cout << "7";
                    break;
                case 'T':
                case 'U':
                case 'V':
                    cout << "8";
                    break;
                case 'W':
                case 'X':
                case 'Y':
                case 'Z':
                    cout << "9";
                    break;
            }
        }
    }
    return 0;
}