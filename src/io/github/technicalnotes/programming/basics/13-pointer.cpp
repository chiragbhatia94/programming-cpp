#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<int> generateRange(int start, int end, int step);

int main()
{
    int *pAge = nullptr;
    int age = 43;
    // reference operator
    pAge = &age;

    cout << "Address: " << pAge << endl;

    // dereference operator
    cout << "Value at Address: " << *pAge << endl;

    int array[] = {12, 3, 12, 21, 2};

    int *pArray = array; // no need to add reference operator & because array is already a pointer

    cout << "1st " << *pArray << " Address " << pArray << endl;
    pArray++;

    cout << "2nd " << *pArray << " Address " << pArray << endl;
    pArray++;
    cout << "3rd " << *pArray << " Address " << pArray << endl;
    pArray--;
    cout << "2nd " << *pArray << " Address " << pArray << endl;

    for (auto temp : generateRange(0, 100, 7))
    {
        cout << temp << " ";
    }
    cout << endl;

    return 0;
}

vector<int> generateRange(int start, int end, int step)
{
    vector<int> v;
    int i = start;
    while (i <= end)
    {
        v.push_back(i);
        i += step;
    }
    return v;
}
