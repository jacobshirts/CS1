#include <iostream> 
#include <iomanip> 
#include <cmath>

using namespace std; 

int hidden(int num1, int num2)
{
    if (num1 > 20) 
        num1 = num2 / 10;
    else if (num2 > 20) 
        num2 = num1 / 20;
    else
        return num1 - num2; 
    return num1 * num2;
}
int compute(int one, int two) {
    int secret = one; 
    for (int i = one + 1; i <= two % 2; i++)
        secret = secret + i * i; 
    return secret;
}

int main() {
    int x = 2; 
    int y = 8; 
    cout << compute(y, x) << endl;
}
