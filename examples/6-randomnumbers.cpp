#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

vector<int> generateRandomNumbers(int count, int min, int max);

int main()
{
    srand(time(NULL));
    vector<int> randomNumbers = generateRandomNumbers(10, 5, 50);
    for (auto n : randomNumbers)
        cout << n << " ";
    return 0;
}

vector<int> generateRandomNumbers(int count, int min, int max)
{
    vector<int> randomNumbers;
    for (int i = 0; i < count; i++)
    {
        int randValue = min + rand() % ((max + 1) - min);
        randomNumbers.push_back(randValue);
    }
    return randomNumbers;
}