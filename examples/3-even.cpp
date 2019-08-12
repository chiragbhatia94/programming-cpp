#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    vector<int> myVec(10);
    // initialize the vector with 1 to 10 sequence
    iota(begin(myVec), end(myVec), 1); 
    for (auto i : myVec)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}