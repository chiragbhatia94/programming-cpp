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
}