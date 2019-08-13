#include <iostream>
#include <ctime>
#define SIZE 10

using namespace std;

/*
-------------------
|  0  |  1  |  2  |
-------------------
|  0  |  1  |  2  |      
-------------------
*/

int main()
{
    srand(time(NULL));

    int array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        int temp = 10 + rand() % (100 - 10 + 1);
        array[i] = temp;
    }

    for (auto i : array)
    {
        cout << i << " ";
    }
    cout << endl;

    // 6-s
    string dashes((5 * SIZE), '-');
    cout << dashes << endl;
    cout << "|";
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %2d |", i);
    }
    cout << endl;
    cout << dashes << endl;
    cout << "|";
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %2d |", array[i]);
    }
    cout << endl;
    cout << dashes << endl;
    return 0;
}
