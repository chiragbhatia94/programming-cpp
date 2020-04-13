#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a = -10, b = 2, c = 1;
  if (a > b)
    if (c > b)
    {
      cout << "C is the smallest";
      // making it multiline
    }
    else
      cout << "inner else";
  else
    cout << "outer else";

  cout << endl;
  if (c = a + b)
  {
    cout << "a + b = " << c;
  }
  else
  {
    cout << "next else";
  }

  cout << endl;
  if (b = a)
  {
    cout << "b = " << b << endl;
  }
}