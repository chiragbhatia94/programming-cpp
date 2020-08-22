#include "bits/stdc++.h"
using namespace std;

// here a & b are formal parameters
void swapByValue(int a, int b);
void swapByReference(int &a, int &b);
void swapByPointer(int *a, int *b);

int main(int argc, char **argv)
{
  // here i & j are actual parameters
  int i = 10, j = 20;
  cout << "Initial value: "
       << "i = " << i << " & j = " << j << endl;
  cout << "Call by value:" << endl;
  swapByValue(i, j);
  cout << "i = " << i << " & j = " << j << endl;
  cout << "Call by reference:" << endl;
  swapByReference(i, j);
  cout << "i = " << i << " & j = " << j << endl;
  cout << "Call by pointer:" << endl;
  swapByPointer(&i, &j);
  cout << "&i = " << &i << " & &j = " << &j << endl;
  cout << "i = " << i << " & j = " << j << endl;
}

void swapByValue(int a, int b)
{
  int c = b;
  b = a;
  a = c;
  cout << "a = " << a << " & b = " << b << endl;
}

void swapByReference(int &a, int &b)
{
  int c = b;
  b = a;
  a = c;
  cout << "a = " << a << " & b = " << b << endl;
}

void swapByPointer(int *a, int *b)
{
  // Pass by pointer is actually pass by value itself as the value of a & b are the addresses of i & j but their addresses are different, and we are just manipulating the pointers to swap the values
  int c = *b;
  *b = *a;
  *a = c;
  cout << "*a = " << *a << " & *b = " << *b << endl;
  cout << "&a = " << &a << " & &b = " << &b << endl;
  cout << "a = " << a << " & b = " << b << endl;
}