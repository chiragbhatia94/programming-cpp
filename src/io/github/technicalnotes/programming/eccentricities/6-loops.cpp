#include "bits/stdc++.h"
using namespace std;

int main()
{
  int a = 1, i = 1;

  while (1)
  {
    while (a <= 10)
    {
      if (a % 2 == 0)
      {
        cout << "breaking at a = " << a << endl;
        ++i;
        break;
      }
      ++a;
      cout << "++a = " << a << endl;
    }

    if (i == 100)
    {
      break;
    }
  }
  cout << "broke outer loop" << endl;

  return 0;
}