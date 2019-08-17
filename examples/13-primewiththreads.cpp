#include <bits/stdc++.h>
using namespace std;

vector<unsigned int> primes;

mutex vectorLock;

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

void findPrimes(unsigned int start, unsigned int end)
{
    if (start <= 2)
    {
        vectorLock.lock();
        primes.push_back(2);
        vectorLock.unlock();
        start = 3;
    }
    start % 2 == 0 ? start += 1 : start;

    for (unsigned int i = start; i < end; i += 2)
    {
        if (checkPrime(i))
        {
            vectorLock.lock();
            primes.push_back(i);
            vectorLock.unlock();
        }
    }
}

void findPrimesWithThreads(unsigned int start, unsigned int end, int numOfThreads)
{
    if (start <= 2)
    {
        primes.push_back(2);
        start = 3;
    }
    start % 2 == 0 ? start += 1 : start;

    vector<thread> threadVector;
    unsigned int threadSpread = end / numOfThreads;
    unsigned int newEnd = start + threadSpread - 1;
    for (unsigned int i = 0; i < numOfThreads; i++)
    {
        // cout << "#" << i << " " << start << " " << newEnd << endl;
        threadVector.emplace_back(findPrimes, start, newEnd);
        start += threadSpread;
        newEnd += threadSpread;
    }

    for (auto &t : threadVector)
    {
        t.join();
    }
}

int main()
{
    auto start = clock();
    findPrimesWithThreads(0, 800000, 3);
    auto end = clock();

    // for (auto prime : primes)
    // {
    //     cout << prime << endl;
    // }
    // cout << endl;

    double totalDuration = (end - start) / double(CLOCKS_PER_SEC);

    cout << "Total primes found: " << primes.size() << endl;
    cout << "Execution time with threads = " << totalDuration << endl;
    return 0;
}