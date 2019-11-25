#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> mset1({1, 2, 3, 4, 5, 5, 1}); // similar to set just that it can store multiple values, but they will be in order

    for (auto i : mset1)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}