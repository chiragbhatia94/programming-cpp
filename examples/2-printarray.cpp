#include <iostream>
#include <string>

using namespace std;

void printArray(int *arr);

int main()
{
    int arr[10] = {1, 353465, 2345};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    for (auto i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    printArray(arr);
    return 0;
}

void printArray(int *arr)
{
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    cout << "Array Size = " << arrSize << endl;
    for (auto i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;  
}