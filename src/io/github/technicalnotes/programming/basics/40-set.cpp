#include "bits/stdc++.h"
using namespace std;

int main()
{
    // associative container just stores sorted data
    // slow to insert
    // fast to read

    set<int> set1{5, 4, 3, 2, 1, 1};
    cout << set1.size() << endl; // 5 as 1 that is duplicate is gonna be removed from set

    set1.insert(11);

    // cout << set1[0] << endl; // not allowed

    set<int>::iterator it = set1.begin();
    it++;
    cout << "2nd value " << *it << endl;

    set1.erase(5);
    it = set1.end();
    advance(it, -2);
    cout << "second last value: " << *it << endl;

    set1.erase(it, set1.end());

    int arr[] = {6, 7, 8, 9};
    set1.insert(arr, arr + 4);
    auto val = set1.find(6);
    cout << "found: " << *val << endl;
    auto eight = set1.lower_bound(8);
    cout << "lower bound: " << *eight << endl;

    auto nine = set1.upper_bound(9);
    cout << "upper bound: " << *nine << endl;

    set<int> set2{10, 11};
    set1.swap(set2);

    if (!set1.empty())
    {
        for (auto i : set1)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << "---------------------------------------" << endl;
    if (!set2.empty())
    {
        for (auto i : set2)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}