#include <iostream> 
#include <cmath>
#include <iomanip>

using namespace std; 

int main()
{
    double yardLength;
    double treeRadius;
    double treeSpace;
    double treeNum;
    const double PI = 3.14159265359;

    cout << "Please enter the length of the yard in meters: ";
    cin >> yardLength;
    cout << endl;

    cout << "Please enter the radius of the fully grown tree: ";
    cin >> treeRadius;
    cout << endl;

    cout << "Please enter the required space between fully grown trees in meters: ";
    cin >> treeSpace;
    cout << endl;

    treeNum = yardLength / (treeSpace + treeRadius * 2);
    cout << fixed << showpoint << setprecision(2);
    cout << "The number of trees that can be planted in the yard is " 
         << treeNum << " trees." << endl;
    cout << "The total amount of space occupied by the trees is " 
         << (PI * pow(treeRadius,2)) * treeNum << " meters." << endl;
}