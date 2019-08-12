#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string in;
    string secretStr = "";
    cout << "Enter an upper case string: ";
    getline(cin, in);
    cout << in << endl;

    for (char c : in)
    {
        int nCode = c;
        secretStr.append(to_string(nCode - 23));
        cout << c << " = " << nCode << endl;
    }

    cout << secretStr << endl;

    string normalStr = "";

    for (int i = 0; i < secretStr.length(); i += 2)
    {
        string sChar = "";
        sChar += secretStr[i];
        sChar += secretStr[i + 1];

        int nChar = stoi(sChar);
        char c = nChar + 23;
        normalStr += c;
    }

    cout << normalStr;
    return 0;
}