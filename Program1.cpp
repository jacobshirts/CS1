//*************************************************************************
// Author: Jacob Shirts
// This program prompts the user for how much milk they produce and then
// computes and outputs how many milk cartons they need, the cost of their 
// milk, and their profit generated from selling their milk.
//*************************************************************************

#include <iostream>

using namespace std;

// Define my constant variables.
const double CARTON_CAPACITY = 3.78;
const double COST_PER_LITER = 0.38;
const double PROFIT_PER_CARTON = 0.27;

// Purpose: Ask the user for the quantity of milk produced
// and then tell them how many milk cartons they need, the cost of their
// milk, and the total profit generated.
main()
{
    // Declare four variables.
    double milkQuantity;    // Amount of milk produced in liters
    int numMilkCartons;     // Number of milk cartons needed to hold milk
    double totalCostMilk;   // Cost of the milk produced
    double profit;          // profit generated from milk

    // Ask the usere to input the quantity of milk produced and store
    // the value in the milkQuantity variable.
    cout << "Enter, in liters, the total quantity of milk produced: ";
    cin >> milkQuantity;
    cout << endl;

    // Use the value that the user just entered along with my constants
    // to calculate the number of milk cartons needed, the cost of milk, amd
    // their total profit.
    numMilkCartons = static_cast<int>(milkQuantity / CARTON_CAPACITY +0.5);
    totalCostMilk = milkQuantity * COST_PER_LITER;
    profit = numMilkCartons * PROFIT_PER_CARTON;

    // Print the results that I just got.
    cout << "The number of milk cartons needed to hold milk: " << numMilkCartons << endl;
    cout << "The cost of producing milk: $" << totalCostMilk << endl;
    cout << "Profit: $" << profit << endl << endl << endl;

    return 0;
}