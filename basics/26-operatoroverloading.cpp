#include <bits/stdc++.h>
using namespace std;

class Box
{
public:
    double length, width, breadth;
    string boxString;
    Box()
    {
        length = 1;
        width = 1;
        breadth = 1;
    }

    Box(double l, double w, double b)
    {
        length = l;
        width = w;
        breadth = b;
    }

    // unary operator (++) overloading
    Box &operator++()
    {
        length++;
        width++;
        breadth++;
        return *this;
    }

    operator const char *()
    {
        ostringstream boxStream;
        boxStream << "Box : " << length << ", " << width << ", " << breadth << endl;
        boxString = boxStream.str();
        return boxString.c_str();
    }

    Box operator+(const Box &box2)
    {
        Box boxSum;
        boxSum.length = length + box2.length;
        boxSum.width = width + box2.width;
        boxSum.breadth = length + box2.breadth;
        return boxSum;
    }

    double operator[](int x)
    {
        if (x == 0)
        {
            return length;
        }
        else if (x == 1)
        {
            return width;
        }
        else if (x == 2)
        {
            return breadth;
        }
        else
        {
            return 0;
        }
    }

    bool operator==(const Box &box2)
    {
        return ((length == box2.length) &&
                (width == box2.width) &&
                (breadth == box2.breadth));
    }

    bool operator>(const Box &box2)
    {
        double thisSize = length * width * breadth;
        double box2Size = box2.length * box2.width * box2.breadth;
        return (thisSize > box2Size);
    }
    bool operator>=(const Box &box2)
    {
        double thisSize = length * width * breadth;
        double box2Size = box2.length * box2.width * box2.breadth;
        return (thisSize >= box2Size);
    }
    bool operator<(const Box &box2)
    {
        double thisSize = length * width * breadth;
        double box2Size = box2.length * box2.width * box2.breadth;
        return (thisSize < box2Size);
    }
    bool operator<=(const Box &box2)
    {
        double thisSize = length * width * breadth;
        double box2Size = box2.length * box2.width * box2.breadth;
        return (thisSize <= box2Size);
    }

    void operator=(const Box &boxToCopy)
    {
        length = boxToCopy.length;
        width = boxToCopy.width;
        breadth = boxToCopy.breadth;
    }
};

int main()
{
    Box box(10, 10, 10);
    ++box;
    cout << box << endl;
    Box box2(5, 5, 5);
    cout << "Box1 + Box2 = " << box + box2 << endl;

    cout << "Box1 length = " << box[0] << endl;
    cout << boolalpha;
    cout << "is box1 = box2? : " << (box == box2) << endl;
    box = box2;
    cout << "Box1: " << box << endl;
    return 0;
}