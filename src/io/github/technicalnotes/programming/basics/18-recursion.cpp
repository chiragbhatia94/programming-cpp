#include <iostream>
using namespace std;

int factorial(int num);

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    // num = 10;
    int f = factorial(num);
    cout << "Factorial of " << num << ": " << f << endl;
    return 0;
}

int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    return num * factorial(num - 1);
}