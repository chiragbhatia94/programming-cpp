#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

bool checkPrime(int num);
vector<int> generatePrimes(int num);

vector<int> gPrimes;

int main()
{
    int num = 5000;
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // cout << "Checking for prime" << endl;
    // cout << num << " is" << (checkPrime(num) ? "" : " not") << " a prime number";

    for (int i = 2; i < num; i++)
    {
        if (checkPrime(i))
        {
            gPrimes.push_back(i);
            cout << i << endl;
        }
    }
}

bool checkPrime(int num)
{
    bool isPrime = false;

    int divisor = 1;

    if (num % 2 == 0)
    {
        divisor = 2;
        if (num == 2)
        {
            isPrime = true;
        }
    }
    else
    {
        for (int i = 3; i < num / 2; i += 2)
        {
            if (num % i == 0)
            {
                divisor = i;
                isPrime = false;
                break;
            }
        }

        if (divisor == 1)
        {
            isPrime = true;
        }
        // cout << divisor << endl;
    }

    return isPrime;
}