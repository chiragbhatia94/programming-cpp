#include <bits/stdc++.h>
using namespace std;

int trap(const vector<int> &A)
{
  // calculating prefixmax, postfixmax
  int SIZE = A.size();
  int prefixMax[SIZE], postfixMax[SIZE];
  int current = A[0];
  prefixMax[0] = current;
  cout << "SIZE " << SIZE << endl;
  for (int i = 1; i < SIZE; i++)
  {
    cout << i << " " << A[i] << endl;
    if (A[i] >= current)
    {
      current = A[i];
    }
    cout << "Current " << current << endl;
    prefixMax[i] = current;
  }
  for (int a : prefixMax)
  {
    cout << a << " ";
  }
}

int main()
{
  trap({3, 2, 6});
  return 0;
}