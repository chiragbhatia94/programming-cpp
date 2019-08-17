#include <bits/stdc++.h>
using namespace std;

bool checkPrime(unsigned int num)
{
    if (num == 2)
    {
        return true;
    }
    for (unsigned i = 3; i < (num / 2); i += 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

void findPrimes(unsigned int start, unsigned int end, vector<unsigned int> &vect)
{
    if (start <= 2)
    {
        vect.push_back(2);
        start = 3;
    }
    start % 2 == 0 ? start += 1 : start;

    for (unsigned int i = start; i < end; i += 2)
    {
        if (checkPrime(i))
        {
            vect.push_back(i);
        }
    }
}

int main()
{
    vector<unsigned int> primes;
    // cout << "Following are prime numbers between 2 & 800000:\n";
    chrono::time_point<chrono::system_clock> start = chrono::system_clock::now();
    findPrimes(0, 800000, primes);
    // for (auto prime : primes)
    // {
    //     cout << prime << " ";
    // }
    // cout << endl;
    cout << "Total primes found: " << primes.size() << endl;
    chrono::time_point<chrono::system_clock> end = chrono::system_clock::now();

    chrono::duration<double> totalTimeElapse = end - start;
    cout << "Total duration: " << totalTimeElapse.count() << "s" << endl;

    return 0;
}