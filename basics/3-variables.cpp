// initialization of variables

#include <iostream>
using namespace std;

int main()
{
    int test;
    cout << "test: " << test << endl; // strangely enough this value is 0, while a similar variable defined in the middle of the main method has random value

    int a = 5;  // initial value: 5
    int b(3);   // initial value: 3
    int c{2};   // initial value: 2
    int result; // only declaration of variable here initial value is undetermined
        
    cout << "result: " << result << endl; // here result will have junk value
    a = a + b;
    result = a - c;
    cout << result;

    return 0;
}