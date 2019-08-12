// initialization of variables

#include <iostream>
using namespace std;

int main(int argc, char **argv)
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
    cout << result << endl;

    // Automatically assigning type
    auto testing = true;

    // create varible from type of another variable
    decltype(testing) test2;
    test2 = argc > 1;

    if (!test2) {
        cout << "No arguments were provided to the program";
    }
    return 0;
}