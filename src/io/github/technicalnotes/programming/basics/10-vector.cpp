#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> v(2);
    v[0] = "One";
    v[1] = "Two";
    v.push_back("Three");

    cout << "lastIndex " << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}