#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
    // int n1;
    // cout << "Number 1: ";
    // cin >> n1;
    // string s;
    // cout << "Number 2: ";
    // cin >> s;

    // int n2 = stoi(s);

    // int add = n1 + n2;

    // cout << "n1 + n2 = " << add << endl;

    char cString[] = {'A', ' ', 'S', 't', 'r', 'i', 'n', 'g', '\0'};
    cout << sizeof(cString) << endl;

    vector<string> stringVec(10);
    string str("I'm a string");
    stringVec[0] = str;

    cout << str.front() << str.back() << "\n";
    cout << "Length: " << str.length() << "\n";
    string str2(str);
    stringVec[1] = str2;

    string str3(str, 4);

    stringVec[2] = str3;
    stringVec.push_back(str3);
    string str4(str, 4, 5);

    stringVec[3] = str4;
    stringVec[4] = str.append(" and you are not");

    string str5(4, 'x');
    stringVec[5] = str5;

    stringVec[6] = str.append(str, 20, 8);

    str += "!";

    for (auto i = 0; i < stringVec.size(); i++)
    {
        cout << i << ": " << stringVec[i] << endl;
    }

    cout << str << endl;

    cout << "----------------------------------------------\n";

    if (str.find("string") != string::npos)
        cout << "first index: " << str.find("string") << "\n";
    cout << "Substr " << str.substr(6, 6) << "\n";
    string temp(str.erase(20, 8));
    reverse(str.begin(), str.end());
    cout << "reverse of " << temp << " = " << str << endl;
    reverse(str.begin(), str.end());

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << "Upper: " << str << "\n";

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << "Lower: " << str << "\n";

    string javaStyleString = "Java Style String";
    cout << javaStyleString << endl;
    return 0;
}