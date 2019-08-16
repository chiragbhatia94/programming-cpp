#include <bits/stdc++.h>
using namespace std;

class Shape
{
public:
    virtual double getArea() = 0;
};

class Circle : public Shape
{
protected:
    double width;

public:
    Circle(double w)
    {
        width = w;
    }

    double getArea() override
    {
        return 3.14159 * pow((width / 2), 2);
    }
};

class Rectangle : public Shape
{
protected:
    double length;
    double width;

public:
    Rectangle(double l)
    {
        length = l;
        width = l;
    }
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    double getArea() override final // final means that this method cannot be overridden by child classes
    {
        return length * width;
    }
};

void showArea(Shape &shape)
{
    cout << "Area = " << shape.getArea() << "." << endl;
}

int main()
{

    Rectangle square{10};
    Rectangle rectangle{10, 15};

    cout << "Square area = " << square.getArea() << endl;

    cout << "Rectangle area = " << rectangle.getArea() << endl;

    Circle circle(20);
    cout << "Circle area = " << circle.getArea() << endl;

    // use of polymorphism
    showArea(circle);
    return 0;
}