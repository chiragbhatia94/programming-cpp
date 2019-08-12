#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    // Enter calculation (ex. 5 + 6) : 10 - 6
    // 10.0 - 6.0 = 4.0
    // Please enter a valid operator from +, -, /, *, %

    string sCalculation;

    cout << "Enter calculation (ex. 5 + 6) : ";
    getline(cin, sCalculation);

    stringstream ssCalculation(sCalculation);

    string sIndividualString;
    char cSpsace = ' ';
    vector<string> vCalculation;

    while (getline(ssCalculation, sIndividualString, cSpsace))
    {
        vCalculation.push_back(sIndividualString);
    }

    // for (string i : vCalculation)
    // {
    //     cout << i << endl;
    // }

    if (vCalculation.size() != 3)
    {
        cout << "Enter a valid expression." << endl;
        return 1;
    }

    double dN1 = stod(vCalculation[0]);
    string sOperation = vCalculation[1];
    double dN2 = stod(vCalculation[2]);
    double dResult = 0.0;

    if (sOperation == "+")
    {
        dResult = dN1 + dN2;
    }
    else if (sOperation == "-")
    {
        dResult = dN1 - dN2;
    }
    else if (sOperation == "/")
    {
        dResult = dN1 / dN2;
    }
    else if (sOperation == "*")
    {
        dResult = dN1 * dN2;
    }
    else if (sOperation == "%")
    {
        dResult = (int)dN1 % (int)dN2;
    }
    else
    {
        cout << "Unknown operation." << endl;
        return 1;
    }

    // cout << dN1 << " " << sOperation << " " << dN2 << " = " << dResult << endl;

    printf("%.1f %s %.1f = %.1f\n", dN1, sOperation.c_str(), dN2, dResult);

    return 0;
}