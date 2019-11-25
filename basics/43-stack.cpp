#include <bits/stdc++.h>
using namespace std;

int main()
{
    // container adapter: containers with interface basically abstract datatypes
    stack<string> custs;
    custs.push("George");
    custs.push("Louise");
    custs.push("Florance");
    int size = custs.size();

    if (!custs.empty())
    {
        for (int i = 0; i < size; i++)
        {
            cout << custs.top() << " ";
            custs.pop();
        }
        cout << endl;
    }
    return 0;
}