#include <bits/stdc++.h>
using namespace std;

void swapWithPointer(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

void swapWithReference(int &i, int &j)
{
    int temp = i;
    i = j;
    j = temp;
}

struct demo
{
    int a;
};

int main()
{
    int a = 10, b = 20;
    cout << "a = " << a << ", b = " << b << endl;
    swapWithPointer(&a, &b);
    cout << "After swapping:\n";
    cout << "a = " << a << ", b = " << b << endl;

    swapWithReference(a, b);
    cout << "After swapping:\n";
    cout << "a = " << a << ", b = " << b << endl;

    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = rand() % 10;
        cout << arr[i] << " ";
    }
    cout << endl;

    swapWithPointer(&arr[2], &arr[3]);
    cout << "After swapping:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    swapWithReference(arr[2], arr[3]);
    cout << "After swapping:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    demo d;
    demo *p = &d;
    demo &r = d;

    cout << "p->a = " << p->a << endl;
    cout << "r.a = " << r.a << endl;

    int intValue = 13, intValue2 = 100;
    int *intPointer;
    cout << "intPointer: " << intPointer << endl;
    // cout << "*intPointer: " << *intPointer << endl; // runtime error since pointer is not yet pointing to any location
    cout << "&intPointer: " << &intPointer << endl;

    intPointer = &intValue;
    cout << "*intPointer: " << *intPointer << endl;

    intPointer += 2;
    cout << "intPointer+=2: " << intPointer << endl;
    cout << "*(intPointer+=2): " << *intPointer << endl;
    cout << "&(intPointer+=2): " << &intPointer << endl;

    cout << "-------------------------------------------" << endl;
    cout << intValue << endl;
    int &r1 = intValue;

    r1++;
    cout << r1 << endl;
    // &r1 = intValue2; // compile time error
    r1 = intValue2; // it is not reassigning the reference it is just setting the value of intValue to intValue2 i.e. 100
    cout << r1 << endl;
    cout << intValue << endl;
    return 0;
}