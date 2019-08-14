#include <bits/stdc++.h> // brings all the standard c++ functions
// #include <iostream>
// #include <string>
// #include <vector>
// #include <numeric>
// #include <functional>

using namespace std;

// FUNCTION DECLARATION
double addNumbers(double num1, double num2);
int addN(int a, int n);
// END FUNCTION DECLARATION

int main()
{
    cout << addNumbers(12, 12);

    std::function<int(int)> fib = [&fib](int n) {
        return (n < 2) ? n : fib(n - 1) + fib(n - 2);
    };

    cout << endl
         << fib(8) << endl;

    function<int(int)> add2 = bind(addN, placeholders::_1, 2);

    cout << "5 + 2 = " << add2(5);
    return 0;
}

// FUNCTIONS
double addNumbers(double num1, double num2)
{
    return num1 + num2;
}

int addN(int a, int n)
{
    return a + n;
}
// END FUNCTIONS