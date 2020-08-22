#include "bits/stdc++.h"
using namespace std;

vector<int> fibWithIteration(int count);
int fibWithRecursion(int n);

int main()
{
    // fibonacci with iteration
    vector<int> fibonacci = fibWithIteration(41);
    for (auto num : fibonacci)
    {
        cout << num << " ";
    }
    cout << endl;
    chrono::time_point<chrono::system_clock> start = chrono::system_clock::now();
    time_t startTime = chrono::system_clock::to_time_t(start);
    // cout << "Start Time: " << ctime(&startTime) << endl;
    int f = fibWithRecursion(40);
    chrono::time_point<chrono::system_clock> endTimePoint = chrono::system_clock::now();
    chrono::duration<double> elapsedDuration = endTimePoint - start;
    time_t endTime = chrono::system_clock::to_time_t(start);
    // cout << "End Time: " << ctime(&endTime) << endl;
    cout << "fibWithRecursion(40): " << f << " Calculation Duration " << elapsedDuration.count() << "s\n";
    return 0;
}

vector<int> fibWithIteration(int count)
{
    vector<int> fib(count);
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < count; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib;
}

int fibWithRecursion(int n)
{
    if (n <= 1)
        return n;

    return fibWithRecursion(n - 1) + fibWithRecursion(n - 2);
}
