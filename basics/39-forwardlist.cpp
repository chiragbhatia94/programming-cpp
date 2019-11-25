#include <bits/stdc++.h>
using namespace std;

bool isEven(int num)
{
    return num % 2 == 0;
}

int main()
{
    // forward list just like list, and it is like a one way linked list
    forward_list<int> fl1;
    fl1.assign({1, 2, 3, 4});
    fl1.push_front(0);
    fl1.pop_front();

    cout << "Front: " << fl1.front() << endl;

    forward_list<int>::iterator it4 = fl1.begin();

    it4 = fl1.insert_after(it4, 5);

    it4 = fl1.erase_after(it4);
    fl1.emplace_front(6);
    fl1.remove(6);
    fl1.remove_if(isEven);

    forward_list<int> fl2;
    fl2.assign({9, 8, 7, 6, 6, 10});
    fl2.unique();
    fl2.reverse(); // just reverses the order, to reverse sort first sort then do reverse

    fl1.merge(fl2);

    for (auto i : fl1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "--------------------------------" << endl;
    for (auto i : fl2)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}