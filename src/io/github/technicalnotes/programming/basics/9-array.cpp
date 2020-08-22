#include <iostream>
#include <string>
using namespace std;

template <typename T, size_t n>
size_t findSize(T (&arr)[n]);

template <typename T, size_t n>
size_t findLength(T (&arr)[n]);

template <typename T, size_t n>
void printArray(T (&arr)[n]);

int main()
{
    int arrNums[10] = {1};
    int arrNums2[] = {1, 2, 3};
    cout << "Print array pointer: " << arrNums << endl;
    int size = sizeof(arrNums) / sizeof(arrNums[0]);
    cout << "sizeof(arrNums) / sizeof(arrNums[0]): " << size << endl;
    for (auto i = 0; i < size; i++)
    {
        cout << arrNums[i] << " ";
    }

    cout << endl;

    int x = findSize(arrNums);
    int y = findSize(arrNums2);

    cout << x << " " << y << endl;

    int a = findLength(arrNums);
    int b = findLength(arrNums2);

    cout << a << " " << b << endl;

    printArray(arrNums);
    printArray(arrNums2);
    return 0;
}

template <typename T, size_t n>
size_t findSize(T (&arr)[n])
{
    // cout << sizeof(T) * n << endl;
    // cout << sizeof(arr) << endl;
    return sizeof(arr);
}

template <typename T, size_t n>
size_t findLength(T (&arr)[n])
{
    // cout << sizeof(T) * n << endl;
    // cout << sizeof(arr) << endl;
    return n;
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