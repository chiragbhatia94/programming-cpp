#include "bits/stdc++.h"
using namespace std;

int main()
{
    ofstream writeToFile;
    ifstream readFromFile;

    string textToWrite;
    string textFromFile;

    writeToFile.open("test.out", ios_base::out | ios_base::trunc);
    if (writeToFile.is_open())
    {
        // writeToFile << "File begining" << endl;
        cout << "Enter some data to put in the file: ";
        getline(cin, textToWrite);
        writeToFile << textToWrite;
        writeToFile.close();
    }

    readFromFile.open("test.out", ios_base::in);
    if (readFromFile.is_open())
    {
        while (readFromFile.good())
        {
            getline(readFromFile, textFromFile);

            string individualString;
            stringstream ss(textFromFile);
            vector<string> words;
            float totalLength = 0;
            while (getline(ss, individualString, ' '))
            {
                int wordlength = individualString.length();
                totalLength += wordlength;
                words.push_back(individualString);
            }

            cout << "Total Words: " << words.size() << endl
                 << "Average word length: " << (totalLength / words.size()) << endl;
        }
    }
    return 0;
}
