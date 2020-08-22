#include "bits/stdc++.h"
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

void printArray(int *arr, int length)
{
  for (size_t i = 0; i < length; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main(int argc, char **argv)
{
  cout << "Pointers revisited 2" << endl;
  srand(time(NULL));

  int length = 10;

  int *a1 = (int *)malloc(length * sizeof(int));

  // Generating random number array
  for (int i = 0; i < length; i++)
  {
    int randomNumber = rand() % 101;
    a1[i] = randomNumber;
  }

  cout << "a1: ";
  printArray(a1, length);

  // another way of creating a dynamic array
  int *a2 = new int[length]();
  cout << "a2: ";
  printArray(a2, length);

  // note you cannot find size of a dynamic array

  int a3[10];

  int a4[] = {1, 2, 3};

  cout << "a3: ";
  printArray(a3);

  cout << sizeof(a1) << " " << sizeof(a2) << " " << sizeof(a3) << endl; // sizeof(pointer) = size of pointer whereas sizeof(array) = size of the entire array
  cout << a1 << " " << a2 << " " << a3 << endl;
  cout << &a1 << " " << &a2 << " " << &a3 << endl; // &array and array both point to the first element of array while &pointer is the address of the pointer
  cout << *a1 << " " << *a2 << " " << *a3 << endl;
  return 0;
}
