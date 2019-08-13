#include <iostream>
#include <math.h>
using namespace std;

double area(double radius);
double area(double height, double width);

int main()
{
    char choice;
    cout << "Please enter your choice" << endl
         << "Area of Circle (c)" << endl
         << "Area of Rectangle (r): ";
    cin >> choice;

    switch (choice)
    {
    case 'c':
        int radius;
        cout << "Radius: ";
        cin >> radius;
        cout << area(radius);
        break;
    case 'r':
        int height, width;
        cout << "Heigh & width: ";
        cin >> height >> width;
        cout << area(height, width);
        break;

    default:
        cout << "Please provide correct choice next time.";
        break;
    }
    return 0;
}

double area(double radius)
{
    return 3.14 * pow(radius, 2);
}
double area(double height, double width)
{
    return height * width;
}