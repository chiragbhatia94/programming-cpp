#include <bits/stdc++.h>
using namespace std;

int main()
{
    int amtToStore;
    cout << "how many numbers do you want to store: ";
    cin >> amtToStore;
    int *pNums;
    pNums = (int *)malloc(amtToStore * sizeof(int));

    if (pNums != NULL)
    {
        int i = 0;
        while (i < amtToStore)
        {
            // cout << pNums[i] << endl; // this will print the previous value at this location (junk)
            cout << "Enter value " << i + 1 << ": ";
            cin >> pNums[i];
            i++;
        }
    }

    cout << "You entered these numbers" << endl;
    for (int i = 0; i < amtToStore; i++)
    {
        cout << pNums[i] << endl;
    }

    delete pNums;
    return 0;
}