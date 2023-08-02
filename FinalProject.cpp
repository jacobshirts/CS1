/*************************************************************************
Author: Jacob Shirts
Instructor: Iveta Holeckova
Class: CSC 1060
Date: 5/1/2023
Description: This program converts a user inputed temperature in Fehrenheit
into Celcius or Kelvin, saves both results in a 2d array and prints all 
previous inputs into a table upon user request.
*************************************************************************/


#include <iostream>
#include <iomanip>

using namespace std;

// Define constants for the temps array later in the program
const int ROWS = 3;
const int COLUMNS = 10;

// Initialize functions to be used in the program
void showMenu();
double calcCelcius(float fahrenheit);
double calcKelvin(float fahrenheit);
bool validateNumber(string input);
bool showCelcius(int counter, float temps[ROWS][COLUMNS]);
bool showKelvin(int counter, float temps[ROWS][COLUMNS]);

int main()
{
    // Create array to store temperatures in
    float temps[ROWS][COLUMNS];

    // counter is used to tell how many times the program has run and input is used to tell what the user is trying to do
    int counter = 0;
    string input = "0";

    cout << "This program converts a temperature in Fahrenheit to Celcius or Kelvin. \n" ;
    cout << "NOTE: A Maximum of 10 temperatures can be entered.\n";

    while(input != "4") {
        // Calls the showMenu function to tell the user what options they have
        showMenu();
        cin >> input;
        cout << endl;
        // Convert fahrenheit to celcius
        if(input == "1"){
            // Check to make sure that the maximum number of temeratures is not exeeded
            if(counter > 9)
                cout << "\nError, maximum number of temperatures reached. Please exit program.\n";
            else{
                // Only increment counter if a valid number is inputed into the function
                if(showCelcius(counter, temps))
                   counter++;
            }
        }

        // Convert fahrenheit to kelvin
        else if(input == "2"){
            // Check to make sure that the maximum number of temeratures is not exeeded
            if(counter > 9)
                cout << "\nError, maximum number of temperatures reached. Please exit program.\n";
            else{
            // Only increment counter if a valid number is inputed into the function
                if(showKelvin(counter, temps))
                    counter++;
            }
        }

        // Display data
        else if(input == "3"){
            cout << "\t Data Entered:\n";
            // Show fahrenheit values from array
            cout << "\n\tFahrenheit:";
            for(int j=0; j < counter; j++){
                cout << setprecision(4) << "\t" << temps[0][j];
            }
            // Show celsius values from array
            cout << "\n\tCelsius:";
            for(int i=0; i < counter; i++){
                cout << setprecision(4) <<"\t" << temps[1][i];
            }
            // Show kelvin values from array
            cout << "\n\tKelvin:\t";
            for(int k=0; k < counter; k++){
                cout << setprecision(4) << "\t" << temps[2][k];
            }
            cout << endl;
        }

        // Exit program
        else if(input == "4"){
            cout << "\nThank you for using the Temperature Conversion program - Good-bye\n";
        }

        // If none of the other if statements are true then the user inputed an invalad number so give and error
        else{
            if(validateNumber(input) == true)
                cout << "Invalid number please try again.";
        }
    }
}

// This function prints what the user can do in the program
void showMenu(){
    cout << "\nSelect one of the following menu options:\n";
    cout << "\t 1. Convert Fahrenheit to Celsius (Centigrade) \n";
    cout << "\t 2. Convert Fahrenheit to Kelvin \n";
    cout << "\t 3. Display Data \n";
    cout << "\t 4. Quit \n";
    cout << "Enter your choice: ";
}

// This function takes a fahrenheit value and converts it to celcius
double calcCelcius(float fahrenheit){
    return (fahrenheit - 32.0) * 5/9;
}

// This function takes a fahrenheit value and converts it to kelvin
double calcKelvin(float fahrenheit){
    return (fahrenheit + 459.67) * 5/9;
}

// This function takes an input and returns true if it is a number and false otherwise
bool validateNumber(string input){
    // Go through all terms in the input
    for(int i = 0; i < input.length(); i++){
        // Test to see if the input is a number, make exception for negative sign
        if(isdigit(input[i]) == false && input[i] != '-'){
            cout << "Invalid Input.";
            return false;
        }
    }
    return true;
}

// This function takes the counter variable and the temps array to decide what spot to save temperature values
// and asks the user to input a fahrenheit value then calculates celcius and kelvin then displays celcius.
bool showCelcius(int counter, float temps[ROWS][COLUMNS]){
    // Ask user for a fahrenheit input and validate it
    string fahrenheitInput;
    cout << "\nEnter a Fahrenheit temperature: ";
    cin >> fahrenheitInput;
    if(validateNumber(fahrenheitInput) == false)
        return false;
    // Save the input to the fahrenheit section of the array
    temps[0][counter] = stof(fahrenheitInput);
    // Calculate celcius and kelvin and store them in their respective places
    temps[1][counter] = calcCelcius(temps[0][counter]);
    temps[2][counter] = calcKelvin(temps[0][counter]);

    // Output the fahrenheit and celcius values
    cout << setprecision(4) << temps[0][counter] << " Fahrenheit = " << temps[1][counter] << " Celcius \n";
    return true;
}

// This function does the same thing as the celcius function but instead outputs the fahrenheit and kelvin values
bool showKelvin(int counter, float temps[ROWS][COLUMNS]){
    // Ask user for a fahrenheit input and validate it
    string fahrenheitInput;
    cout << "\nEnter a Fahrenheit temperature: ";
    cin >> fahrenheitInput;
    if(validateNumber(fahrenheitInput) == false)
        return false;
    // Save the input to the fahrenheit section of the array
    temps[0][counter] = stof(fahrenheitInput);
    // Calculate celcius and kelvin and store them in their respective places
    temps[1][counter] = calcCelcius(temps[0][counter]);
    temps[2][counter] = calcKelvin(temps[0][counter]);

    // Output the fahrenheit and kelvin values
    cout << setprecision(4) << temps[0][counter] << " Fahrenheit = " << temps[2][counter] << " Kelvin \n";
    return true;
}
