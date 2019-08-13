#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

vector<string> stringToVector(string str);

int main()
{
    string equation = "x + 5 = 17";
    vector<string> vec = stringToVector(equation);
    int num1 = stoi(vec[2]);
    int num2 = stoi(vec[4]);

    int x = num2 - num1;

    cout << "x = " << x << endl;
    return 0;
}

vector<string> stringToVector(string str)
{
    vector<string> vec;
    stringstream ss(str);
    string individualString;
    while (getline(ss, individualString, ' '))
    {
        vec.push_back(individualString);
    }
    return vec;
}