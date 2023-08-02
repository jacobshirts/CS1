#include <iomanip>
#include <iostream> 

using namespace std; 

int main()
{
    double mass;
    double density;
    double volume;

    cout << "Enter the mass of your object in grams: ";
    cin >> mass;
    cout << endl;

    cout << "Enter the density of your object in grams per cubic cm: ";
    cin >> density;
    cout << endl;

    cout << fixed << showpoint << setprecision(2);
    volume = mass / density;
    cout << "The volume of the object is: " << volume << " cubic cm" 
         << endl;
}