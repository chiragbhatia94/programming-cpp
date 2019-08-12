#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    string sSentence = "This is a random string";
    vector<string> vecWords;
    stringstream ss(sSentence);

    string individualString;
    char cSpace = ' ';

    while(getline(ss, individualString, cSpace)) {
        vecWords.push_back(individualString);
    }

    for (int i = vecWords.size() - 1; i >= 0; i--)
    {
        cout << vecWords[i] << endl;
    }
    
    return 0;
}