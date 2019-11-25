#include <iostream>
#include <string>

using namespace std;

template <typename T, size_t n>
void printArray(T (&arr)[n]);

int main()
{
    int arr[10] = {1, 353465, 2345};
    printArray(arr);

    int arrSize = sizeof(arr) / sizeof(arr[0]);

    for (auto i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}

template <typename T, size_t n>
void printArray(T (&arr)[n])
{
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}