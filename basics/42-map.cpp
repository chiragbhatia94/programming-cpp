#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> map1;
    map1.insert(pair<int, string>(1, "Chirag"));
    map1.insert(pair<int, string>(2, "Deepak"));
    map1.insert(pair<int, string>(3, "Yogesh"));
    map1.insert(pair<int, string>(4, "Sagar"));

    auto match = map1.find(1);
    cout << match->first << ": " << match->second << endl;

    auto lb = map1.lower_bound(3);
    auto ub = map1.upper_bound(3);

    cout << "Lower bound 3 = " << lb->first << ": " << lb->second << endl;

    cout << "Upper bound 3 = " << ub->first << ": " << ub->second << endl;

    for (auto p : map1)
    {
        cout << p.first << ": " << p.second << endl;
    }

    // map<int, string>::iterator it;
    // for (auto i = map1.begin(); i != map1.end(); i++)
    // {
    //     cout << i->first << ": " << i->second << endl;
    // }

    // same with multimap

    return 0;
}