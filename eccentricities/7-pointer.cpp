#include <bits/stdc++.h>
using namespace std;

template <typename T, size_t n>
void printArray(T (&arr)[n])
{
  for (size_t i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

template <typename T, size_t n>
void refreshArray(T (&arr)[n], int *&p1)
{
  for (size_t i = 0; i < n; i++)
  {
    arr[i] = 10 * (i + 1);
  }
  p1 = arr + 2;
}

void manipulateArray(int arr[])
{
  arr++;
  cout << "*arr: " << *arr << endl;
  cout << "arr[0]++: " << arr[0]++ << endl;
}

int main()
{
  int a[] = {10, 20, 30, 40};
  // int *p = a;
  int *p1, *p2, i = 1;
  p1 = a;
  cout << "p1 = " << p1 << endl;
  cout << "*p1 = " << *p1 << endl;
  p1++;
  cout << "*p1 = " << *p1 << endl;

  // case 1:
  // i is not a pointer data type, it is int
  // cout << i[0] << endl;

  cout << i[a] << endl;

  p1 = a;

  // case 2 & 3:
  // y = p2 + p1; // results into error

  int y = p2 - p1;
  cout << "p2 - p1 = " << y << endl;

  cout << "*******************************" << endl;

  // case 1:
  refreshArray(a, p1);
  cout << "*p1 = " << *p1 << endl;
  cout << "*++p1 = " << *++p1 << " & ";
  printArray(a);
  cout << "*p1 = " << *p1 << endl;
  cout << endl;

  // case 2:
  refreshArray(a, p1);
  cout << "*p1 = " << *p1 << endl;
  cout << "++*p1 = " << ++*p1 << " & ";
  printArray(a);
  cout << "*p1 = " << *p1 << endl;
  cout << endl;

  // case 3:
  refreshArray(a, p1);
  cout << "*p1 = " << *p1 << endl;
  cout << "*p1++ = " << *p1++ << " & ";
  printArray(a);
  cout << "*p1 = " << *p1 << endl;
  cout << endl;

  // case 4:
  refreshArray(a, p1);
  cout << "*p1 = " << *p1 << endl;
  cout << "(*p1)++ = " << (*p1)++ << " & ";
  printArray(a);
  cout << "*p1 = " << *p1 << endl;
  cout << endl;

  manipulateArray(a);

  int b[][2] = {10, 20, 30, 40, 50, 60};
  int *ap[10];
  ap[0] = b[0];
  ap[1] = b[1];
  ap[2] = b[2];

  cout << "ap[0][1] = " << ap[0][1] << endl;

  return 0;
}