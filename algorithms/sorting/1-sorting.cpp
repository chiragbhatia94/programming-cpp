#include "../../helpers/helpers.cpp"
using namespace std;

#ifndef MAIN
#define MAIN

#include "./2-bubblesort.cpp"
#include "./3-selectionsort.cpp"
#include "./4-insertionsort.cpp"
#include "./5-heapsort.cpp"

int main(int argc, char **argv)
{
  vector<int> list = generateRandomIntegerVector(10, 5, 50);
  // vector<int> list = {0, 3, 2, 1, 5};
  vector<int> sortedList = heapSort(list);

  cout << "Original list: ";
  printVector(list);
  cout << "Sorted list: ";
  printVector(sortedList);
  return 0;
}
#endif // !MAIN