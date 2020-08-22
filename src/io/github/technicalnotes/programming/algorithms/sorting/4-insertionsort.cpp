#include "../../helpers/helpers.cpp"
using namespace std;

#ifndef MAIN
#define MAIN

vector<int> insertionSort(vector<int>);

int main(int argc, char **argv)
{
  vector<int> list = generateRandomIntegerVector(10, 5, 50);
  // vector<int> list = {0, 3, 2, 1, 5};
  vector<int> sortedList = insertionSort(list);

  cout << "Original list: ";
  printVector(list);
  cout << "Sorted list: ";
  printVector(sortedList);
  return 0;
}
#endif // !MAIN

vector<int> insertionSort(vector<int> list)
{
  for (size_t i = 0; i < list.size() - 1; i++)
  {
    cout << "Pass " << i + 1 << ": ";
    printVector(list);
    int j = i + 1;
    while (j > 0)
    {
      cout << "\tIs " << list[j] << " < " << list[j - 1] << endl;
      if (list[j] < list[j - 1])
      {
        cout << "\tSwitch" << endl;
        // swap
        int temp = list[j - 1];
        list[j - 1] = list[j];
        list[j] = temp;
        j--;
        printVector(list);
      }
      else
      {
        break;
      }
    }

    printVector(list);
  }
  return list;
}