#include "bits/stdc++.h"
// sequencial container contain data and store them in sequence
// Vector, Deque, List, Forward List all are sequencial containers
// #include <deque>
// #include <list>
// #include <forward_list>

using namespace std;

bool isEven(const int num)
{
    return num % 2 == 0;
}

int main()
{
    deque<int> deq1;
    deq1.push_back(5);
    deq1.push_back(6);
    deq1.push_front(1);
    deq1.assign({11, 12}); // assign overrides whatever was earlier present so current value will be 11, 12

    deq1.push_back(5);
    deq1.push_back(6);
    deq1.push_front(1);

    // deque allows access via index
    cout << deq1[0] << " " << deq1.at(1) << endl;

    deque<int>::iterator itr = deq1.begin() + 1;

    deq1.insert(itr, 3);

    int tempArr[5] = {6, 7, 8, 9, 10};

    deq1.insert(deq1.end(), tempArr, tempArr + 5);

    deq1.erase(deq1.end());

    deq1.erase(deq1.begin(), deq1.begin() + 2);

    cout << *deq1.end() << endl; // this is 10 as it was last removed

    deq1.pop_front();
    deq1.pop_back();

    deque<int> deq2(2, 50); // 2 values both equal to 50

    // deq1.swap(deq2);
    // deq1.clear();

    for (int i : deq1)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size of deque: " << deq1.size() << endl;

    return 0;
}