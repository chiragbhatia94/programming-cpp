#include <bits/stdc++.h>
using namespace std;

vector<int> filter(function<bool(int)> func, vector<int> list)
{
    vector<int> newlist;
    for (int i = 0; i < list.size(); i++)
    {
        if (!func(list[i]))
        {
            newlist.push_back(list[i]);
        }
    }
    return newlist;
}

int main()
{
    srand(time(NULL));
    vector<int> list(10);
    for (int i = 0; i < 10; i++)
    {
        list[i] = rand() % 10 + 1;
        cout << list[i] << " ";
    }
    cout << endl;

    cout << "Filering all the even numbers out: " << endl;
    for (auto item : filter([](int x) { return x % 2 == 0; }, list))
    {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}