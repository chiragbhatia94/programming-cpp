#include "bits/stdc++.h"
using namespace std;

int main()
{
  int a = 10, b = 2, c = 13;

  // c/c++ does not have exponent operator rather it has exor
  cout << "a ^ b = " << (a ^ b) << endl;

  // for exponent
  cout << "a ^ b = " << pow(a, b) << endl;

  int greatest = (a > b) ? (a > c) ? a : c : (b > c) ? b : c;
  cout << "greatest = " << greatest;

  cout << numeric_limits<int>::max() << endl;
  return 0;
}