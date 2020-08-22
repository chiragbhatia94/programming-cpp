#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

vector<int> findSubstringMatches(string phrase, string toSearch);
string findAndReplaceSubstringMatches(string phrase, string toSearch, string toReplaceWith);
vector<string> stringToVector(string theString, char separator);
string vectorToString(vector<string> theVector, char separator);
string trimWhitespace(string theString);

int main()
{
    string aStr = "    jUst a random string       ";
    cout << trimWhitespace(aStr) << endl;
    return 0;
}

vector<int> findSubstringMatches(string phrase, string toSearch)
{
    vector<int> vec;
    int i = 0;
    while (phrase.find("be", i) != string::npos)
    {
        i = phrase.find("be", i);
        vec.push_back(i);
        i++;
    }
    return vec;
}

string findAndReplaceSubstringMatches(string phrase, string toSearch, string toReplaceWith)
{
    int i = 0;
    while (phrase.find(toSearch, i) != string::npos)
    {
        i = phrase.find(toSearch, i);
        phrase.replace(i, toSearch.length(), toReplaceWith);
        i++;
    }
    return phrase;
}
vector<string> stringToVector(string theString, char separator)
{
    vector<string> vectorWords;
    stringstream ss(theString);

    string sIndividualString;
    while (getline(ss, sIndividualString, separator))
    {
        vectorWords.push_back(sIndividualString);
    }

    return vectorWords;
}

string vectorToString(vector<string> theVector, char separator)
{
    string sString = "";
    for (auto s : theVector)
    {
        sString += s + separator;
    }
    return sString;
}

string trimWhitespace(string theString)
{
    string whitespaces(" \t\n\r");
    theString.erase(theString.find_last_not_of(whitespaces) + 1);
    theString.erase(0, theString.find_first_not_of(whitespaces));
    return theString;
}