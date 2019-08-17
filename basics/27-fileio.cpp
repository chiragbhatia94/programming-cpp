#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "File IO" << endl;

    ofstream writeToFile;
    ifstream readFromFile;

    string textToWrite = "";
    string textFromFile = "";

    // ios::app : Append to the end of the file
    // ios::trunc : If file exists deletes content
    // ios::in : Open file for reading
    // ios::out : Open file for writing
    // ios::ate : Open writing and move to the end of the file

    writeToFile.open("test.out", ios_base::out | ios_base::trunc);
    if (writeToFile.is_open())
    {
        writeToFile << "Begining of file" << endl;
        cout << "Enter data to write in the file: ";
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
            cout << textFromFile << endl;
        }

        readFromFile.close();
    }

    return 0;
}