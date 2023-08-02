#include <iostream>

using namespace std;

main()
{
    int num = 17; 
    double gpa = 3.85; 
    bool done;
    
    done = (num == static_cast<int>(2 * gpa + 9.3)); 
    cout << "The value of done is: " << done << endl;

    // if (str3 <= "Light")
    // {
    //     cout << "true";
    // }
    // else
    // {
    //     cout << "false ";
    // }

    return 0;
}