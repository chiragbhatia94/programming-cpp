#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
using namespace std;

string ceasarCipher(string phrase, int difference, bool encrypt);

int main()
{
    string phrase = "To be or not to be abuvwxyz ABUVWXYZ";
    string encryptedPhrase = ceasarCipher(phrase, 5, true);
    cout << endl;
    string decryptedPhrase = ceasarCipher(encryptedPhrase, 5, false);

    cout << "Original: " << phrase << endl;
    cout << "Encrypted: " << encryptedPhrase << endl;
    cout << "Decrypted: " << decryptedPhrase << endl;

    return 0;
}

string ceasarCipher(string phrase, int difference, bool encrypt)
{
    int dynamicUse = 0;
    map<char, char> ceasarMap;
    string convertedPhrase = "";
    for (auto c : phrase)
    {
        if (isalpha(c))
        {
            // calculate ceasar character for this character
            map<char, char>::iterator itr = ceasarMap.find(c);
            if (itr != ceasarMap.end())
            {
                char x = itr->second;
                convertedPhrase += x;
                dynamicUse++;
            }
            else
            {
                int ascii = c;
                int convertedAscii = ascii;
                if (encrypt)
                {
                    convertedAscii += difference;
                }
                else
                {
                    convertedAscii -= difference;
                }

                if (isupper(c))
                {
                    if (convertedAscii > (int)'Z')
                    {
                        convertedAscii -= 26;
                    }
                    else if (convertedAscii < (int)'A')
                    {
                        convertedAscii += 26;
                    }
                }
                else
                {
                    if (convertedAscii > (int)'z')
                    {
                        convertedAscii -= 26;
                    }
                    else if (convertedAscii < (int)'a')
                    {
                        convertedAscii += 26;
                    }
                }
                char convertedChar = (char)convertedAscii;
                ceasarMap.insert(pair<char, char>(c, convertedChar));
                convertedPhrase += convertedChar;
            }
        }
        else
        {
            convertedPhrase += c;
        }
    }
    cout << "dynamicUse: " << dynamicUse << endl;
    return convertedPhrase;
}