#include "bits/stdc++.h"
using namespace std;

int trap(const vector<int> &A)
{
  // calculating postfixmax
  int SIZE = A.size();
  int postfixMax[SIZE];

  int i = SIZE - 1;
  int current = A[i];
  postfixMax[i] = current;
  for (; i >= 0; i--)
  {
    if (A[i] > current)
    {
      current = A[i];
    }
    postfixMax[i] = current;
  }

  int currentPrefixMax = numeric_limits<int>::min();
  int sumOfWater = 0;
  for (int i = 0; i < SIZE; i++)
  {
    if (A[i] > currentPrefixMax)
    {
      currentPrefixMax = A[i];
    }
    int minLeftRight = currentPrefixMax;
    if (postfixMax[i] < minLeftRight)
    {
      minLeftRight = postfixMax[i];
    }
    int waterAbove = minLeftRight - A[i];
    sumOfWater += (waterAbove > 0) ? waterAbove : 0;
  }
  return sumOfWater;
}

int main()
{
  cout << trap({0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1});
  return 0;
}