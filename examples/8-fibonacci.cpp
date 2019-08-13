#include <iostream>
#include <vector>

using namespace std;

vector<int> fibWithIteration(int count);
int fib(int n);

int main()
{
    // fibonacci with iteration
    vector<int> fibonacci = fibWithIteration(10);
    for (auto num : fibonacci)
    {
        cout << num << " ";
    }
    cout << endl;

    cout << "fib(3): " << fib(3);

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

int fib(int n)
{
    if (n <= 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}
