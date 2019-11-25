#include <bits/stdc++.h>
using namespace std;

int main()
{
    enum day
    {
        MON = 1,
        TUE,
        WED,
        THUR,
        FRI = 6
    };
    enum day tuesday = TUE;
    cout << "Tuesday is the " << tuesday << "nd of the week" << endl;

    for (int i = MON; i <= FRI; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}