#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv)
{
  // common eccentricities of C/C++
  // Loosly typed language
  int a = 10.2; // no syntax error but a's value is 10
  cout << "a: " << a << endl;

  // Memory management & security
  // this may or may not result into a runtime error
  int arr[] = {1, 2, 3};
  arr[4] = 3;

  // length of arr as there is no arr.length as array is just a contigious block of memory in c
  int length = sizeof(arr) / sizeof(int);
  for (size_t i = 0; i < length; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  // remainder operator does not work with float, semantic error
  float d = 10, r = 8, c;
  // c = x % y; // results into semantic error
  c = (int)d % (int)r;
  cout << "c = " << c << endl;

  float sal = 1000, t;
  t = 1 / 2 * sal;
  cout << "t = " << t << endl;

  int a1 = 016, a2 = 0x16, a3 = 16;
  cout << a1 << endl;
  printf("%#o %#x %d\n", a1, a2, a3);
  printf("%d %d %d\n", a1, a2, a3);

  // following outputs depend on compiler to compiler
  // not to answer in exam
  int t1 = 10, y;
  y = ++t1 + ++t1;
  cout << "y = " << y << " t1 = " << t1 << endl;
  t1 = 10;
  y = ++t1 + t1++;
  cout << "y = " << y << " t1 = " << t1 << endl;

  int p, q;
  p = q = r = 10;
  printf("p = %d, q = %d, r = %f\n", p, q, r);
}