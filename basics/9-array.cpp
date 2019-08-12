#include <iostream>
#include <string>
using namespace std;

void printArray(int *arr);

int main()
{
    int arrNums[10] = {1};
    int arrNums2[] = {1, 2, 3};
    cout << arrNums;
    int size = sizeof(arrNums) / sizeof(arrNums[0]);
    for (auto i = 0; i < size; i++)
    {

        cout << arrNums[i] << " ";
    }

    return 0;
}

void printArray(int *arr)
{
    int size = sizeof(arr) / sizeof(arr[0]);
    for (auto i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}