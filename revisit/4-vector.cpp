#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
  vector<int> testVector;

  for (int i = 0; i < 11; i++)
  {
    // testVector[i] = i; // wont work as the vector is not initialized to have any values, pushing at 0th location will fail
    testVector.push_back(i); // adds a node at the end and pushes the value
  }

  return 0;
}