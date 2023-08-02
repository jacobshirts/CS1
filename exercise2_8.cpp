#include <iostream> 

using namespace std; 

int main()
{
    double merchCost;
    double salary;
    double annualRent;
    double electricityCost;
    double markUp;
    double totalCost;
    const double salePercent = .15;
    const double profitPercent = .10;
    
    cout << "Please enter the total cost of all merchandice sold per year: ";
    cin >> merchCost;
    cout << endl;

    cout << "Please enter the total salary of all employees including your own: ";
    cin >> salary;
    cout << endl;

    cout << "Please enter your annual rent cost: ";
    cin >> annualRent;
    cout << endl;

    cout << "Please enter your estimated cost of electricity for the year: ";
    cin >> electricityCost;
    cout << endl;

    totalCost = merchCost + salary + annualRent + electricityCost;

    markUp = ((profitPercent + 1) * (totalCost)) / (merchCost * (1 - salePercent)) - 1;

    cout << "The merchandise should be marked up by: %" << markUp * 100 << endl;
}