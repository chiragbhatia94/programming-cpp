#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> cast;
    cast.push("Zoidberg");
    cast.push("Bender");
    cast.push("Leela");

    int castSize = cast.size();
    if (!cast.empty())
    {
        for (int i = 0; i < castSize; i++)
        {
            cout << cast.front() << " ";

            cast.pop();
        }
        cout << endl;
    }
    cout << "---------------------------------------\nPriority queue:" << endl;
    priority_queue<int> nums; // similar to queue just that it brings largest one in the front and keeps the queue sorted
    nums.push(1);
    nums.push(0);
    nums.push(4);
    int numsSize = nums.size();
    if (!nums.empty())
    {
        for (int i = 0; i < numsSize; i++)
        {
            cout << nums.top() << " "; // priority_queue

            nums.pop();
        }
        cout << endl;
    }
    return 0;
}