#include "../../helpers/helpers.cpp"
using namespace std;

#ifndef MAIN
#define MAIN
vector<int> heapSort(vector<int>);
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

vector<int> heapSort(vector<int> list)
{
  return list;
}