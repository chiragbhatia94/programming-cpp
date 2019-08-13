#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

vector<int> generateRange(int start, int end, int step)
{
    vector<int> v;
    int i = start;
    while (i <= end)
    {
        v.push_back(i);
        i += step;
    }
    return v;
}

template <typename T>
void printVector(vector<T> v)
{
    for (auto temp : v)
    {
        cout << temp << " ";
    }
    cout << endl;
}

void printMultipleTimes(string x, int times)
{
    while (times > 0)
    {
        cout << x;
        times--;
    }
}

vector<int> generateRandomIntegerVector(int count, int min, int max)
{
    vector<int> randomNumbers;
    srand(time(NULL));
    for (int i = 0; i < count; i++)
    {
        randomNumbers.push_back(min + (rand() % (max + 1 - min)));
    }
    return randomNumbers;
}