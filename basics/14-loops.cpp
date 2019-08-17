#include <iostream>
#include <string>
#include <vector>
#include "../helpers/helpers.cpp"

using namespace std;

int main()
{
    // printVector(generateRange(0, 100, 7));
    // print pine trees
    int height;
    cout << "Enter the height of pine tree: ";
    cin >> height;

    int lastRowCount = (2 * height) - 1;
    int i = 1;
    while (i <= height)
    {
        int noOfPines = (2 * i) - 1;
        int noOfWhiteSpaces = lastRowCount - noOfPines;
        int leadingWhiteSpaces = noOfWhiteSpaces / 2;
        printMultipleTimes(" ", leadingWhiteSpaces);
        printMultipleTimes("#", noOfPines);
        cout << endl;
        i++;
    }
    int lastRowLeadingSpaces = (lastRowCount - 1) / 2;
    printMultipleTimes(" ", lastRowLeadingSpaces);
    printMultipleTimes("#", 1);
    return 0;
}