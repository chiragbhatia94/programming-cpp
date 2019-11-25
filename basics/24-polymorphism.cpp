#include <bits/stdc++.h>
using namespace std;

class Shape
{
protected:
    double height;
    double width;

public:
    Shape(double length)
    {
        height = length;
        width = length;
    }
    Shape(double h, double w)
    {
        height = h;
        width = w;
    }

    // function that needs to be overridden by derived class
    virtual double getArea()
    {
        return height * width;
    }
};

class Circle : public Shape
{
public:
    Circle(double w) : Shape(w) {}

    // the below function needs to be overridden as it was defined virtual in base class
    double getArea()
    {
        return 3.14159 * pow(width / 2, 2);
    }
};

// this can be used for creating design patterns
void showArea(Shape &shape)
{
    cout << "Area = " << shape.getArea() << endl;
}

int main()
{
    Shape square(10);
    Shape rectangle{10, 15};

    cout << "Square area = " << square.getArea() << endl;

    cout << "Rectangle area = " << rectangle.getArea() << endl;

    Circle circle(20);
    cout << "Circle area = " << circle.getArea() << endl;

    // use of polymorphism
    showArea(circle);
    return 0;
}