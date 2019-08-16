// Program 3
#include <bits/stdc++.h>
using namespace std;

struct Shape
{
    double length;
    double width;

    Shape() {}
    Shape(double l, double w)
    {
        length = l;
        width = w;
    }

    double getArea()
    {
        return length * width;
    }

    // Private members
private:
    int id;
};

struct Circle : Shape
{
    Circle(double w)
    {
        width = w;
    }

    double getArea()
    {
        return 3.14159 * pow(width / 2, 2);
    }
};

int main()
{
    Shape shape(10, 10);
    cout << "Square area = " << shape.getArea() << endl;

    Circle circle(10);
    cout << "Circle area = " << circle.getArea() << endl;

    Shape rectangle{10, 15};
    cout << "Rectangle area = " << rectangle.getArea() << endl;
    return 0;
}