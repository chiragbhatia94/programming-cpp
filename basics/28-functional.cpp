#include <bits/stdc++.h>
using namespace std;
double multBy2(double num)
{
    return num * 2;
}

double doMath(function<double(double)> func, double num)
{
    return func(num);
}

double multBy3(double num)
{
    return num * 3;
}

int main()
{
    auto times2 = multBy2;
    cout << "5 * 2 = " << times2(5) << endl;

    cout << "10 * 2 = " << doMath(times2, 10) << endl;

    vector<function<double(double)>> functions;
    functions = {multBy2, multBy3};

    cout << "2 * 10 = " << functions[0](10) << endl;
    return 0;
}