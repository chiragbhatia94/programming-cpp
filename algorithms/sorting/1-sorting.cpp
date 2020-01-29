#include "./2-bubblesort.cpp"
using namespace std;

int main(int argc, char **argv)
{
  vector<int> list = generateRandomIntegerVector(10, 5, 50);

  vector<int> sortedList = bubbleSort(list);

  cout << "Original list: ";
  printVector(list);
  cout << "Sorted list: ";
  printVector(sortedList);
  return 0;
}