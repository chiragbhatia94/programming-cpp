#include "bits/stdc++.h"
using namespace std;

int main()
{
    int amtToStore;
    cout << "How many numbers do you want to store? ";
    cin >> amtToStore;
    unique_ptr<int[]> pNums(new int[amtToStore]);
    // you cannot reassign unique_ptr to another unique_pointer variable, we can only do that with shared_ptr

    if (pNums != NULL)
    {
        int i = 0;
        while (i < amtToStore)
        {
            cout << "Enter number " << i + 1 << ": ";
            cin >> pNums[i++];
        }
    }

    cout << "You entered these numbers: " << endl;
    for (int i = 0; i < amtToStore; i++)
    {
        cout << pNums[i] << " ";
    }
    cout << endl;

    return 0;
}