#include <bits/stdc++.h> // brings all the standard c++ functions
// #include <iostream>
// #include <string>
// #include <vector>
// #include <numeric>
// #include <functional>

using namespace std;

// FUNCTION DECLARATION
double addNumbers(double num1, double num2);
// END FUNCTION DECLARATION

int main()
{
    cout << addNumbers(12, 12);

    std::function<int(int)> fib = [&fib](int n) {
        return (n < 2) ? n : fib(n - 1) + fib(n - 2);
    };

    cout << endl
         << fib(8) << endl;

    return 0;
}

// FUNCTIONS
double addNumbers(double num1, double num2)
{
    return num1 + num2;
}
// END FUNCTIONS