#include "../../helpers/helpers.cpp"
using namespace std;

#ifndef MAIN
#define MAIN

vector<int> selectionSort(vector<int>);

int main(int argc, char **argv)
{
  vector<int> list = generateRandomIntegerVector(10, 5, 50);
  // vector<int> list = {0, 3, 2, 1, 5};
  vector<int> sortedList = selectionSort(list);

  cout << "Original list: ";
  printVector(list);
  cout << "Sorted list: ";
  printVector(sortedList);
  return 0;
}
#endif // !MAIN

vector<int> selectionSort(vector<int> list)
{
  for (size_t i = 0; i < list.size(); i++)
  {
    cout << "Pass " << i + 1 << ": ";
    printVector(list);
    int min = i;
    cout << "\tMin " << list[min] << endl;
    for (size_t j = i + 1; j < list.size(); j++)
    {
      cout << "\tIs " << list[j] << "<" << list[min] << endl;
      if (list[j] < list[min])
      {
        min = j;
        cout << "\tMin " << list[min] << endl;
      }
    }
    cout << "\tMin " << list[min] << endl;

    cout << "\tIs " << list[min] << "!=" << list[i] << endl;
    if (min != i)
    {
      cout << "\tSwitch" << endl;
      // swap
      int temp = list[i];
      list[i] = list[min];
      list[min] = temp;
    }
    printVector(list);
  }
  return list;
}