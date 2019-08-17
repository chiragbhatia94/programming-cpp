#include <bits/stdc++.h>
using namespace std;

template <typename T>
T times2(T num)
{
    auto returnVal = num * 2;
    std::cout << num << " * 2 = " << returnVal << endl;
    return returnVal;
}

template <typename T>
T getMax(T val1, T val2)
{
    return (val1 > val2) ? val1 : val2;
}

template <typename T, typename U>
class Person
{
public:
    T height;
    U weight;
    static int numOfPeople;
    Person(T height, U weight)
    {
        this->height = height;
        this->weight = weight;
        numOfPeople++;
    }

    void getData()
    {
        cout << "Person: height " << height << " and weight " << weight << endl;
    }
};

template <typename T, typename U>
int Person<T, U>::numOfPeople;

int main()
{
    times2(23);
    times2(23.55);
    cout << "getMax(23,12435) = " << getMax(23, 12435) << endl;
    cout << "getMax(\"Four\", \"Eight\") = " << getMax("Four", "Eight") << endl;

    Person<double, int> mikeTyson(5.82, 216);

    mikeTyson.getData();
    cout << "Number of people" << mikeTyson.numOfPeople << endl;
    return 0;
}