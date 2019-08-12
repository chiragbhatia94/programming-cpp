#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

// FUNCTION DECLARATION
double addNumbers(double num1, double num2);
// END FUNCTION DECLARATION

int main()
{
    cout << addNumbers(12, 12);
    return 0;
}

// FUNCTIONS
double addNumbers(double num1, double num2)
{
    return num1 + num2;
}
// END FUNCTIONS