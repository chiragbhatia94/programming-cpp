#include <bits/stdc++.h>
using namespace std;

bool isEven(int num)
{
    return num % 2 == 0;
}

int main()
{
    // list are most effecient insert, moving & extracting elements after forward_list
    // however they lack the ability to directly access them

    int arr[5] = {1, 2, 3, 4, 5};

    list<int> list1;
    list1.insert(list1.begin(), arr, arr + 5);
    // list1.assign({1,2,3,4});

    list1.push_back(6);
    list1.push_front(0);

    // cout << list1[0] << endl; // does not work

    list<int>::iterator itr = list1.begin();

    advance(itr, 1);

    cout << "2nd Index: " << *itr << "\n";

    itr = list1.begin();
    list1.insert(itr, 8);
    list1.erase(list1.begin());

    itr = list1.begin();
    list<int>::iterator itr1 = list1.begin();

    advance(itr1, 3);
    list1.erase(itr, itr1);

    list1.pop_front();
    list1.pop_back();

    int arr2[6] = {10, 9, 8, 7, 6, 6};
    list<int> list2;
    list2.insert(list2.begin(), arr2, arr2 + 6);

    list2.sort();
    list2.reverse();
    list2.unique();

    list2.remove(6);
    list2.remove_if(isEven);

    list1.merge(list2); // merge list 2 in list 1 and this will empty list 2

    for (auto i : list1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "List size: " << list1.size() << endl;
    cout << "----------------------------------" << endl;
    for (auto i : list2)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "List size: " << list2.size() << endl;

    list<int>::iterator itre = list1.end();

    return 0;
}