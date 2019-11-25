#include <bits/stdc++.h>
#include "30_1-animal.h" // including another file in our program

#define PI 3.14159                           // macro preprocessor: PI will be replaced with 3.14159
#define AREA_CIRCLE(r) (PI * std::pow(r, 2)) // macro function: AREA_CIRCLE(5) will be replaced with the function definition
using namespace std;

int main()
{
    Animal spot;
    spot.name = "Spot";
    cout << "The animal name is " << spot.name << endl;

    cout << "Area of circle of radius 5: " << AREA_CIRCLE(5) << endl;
    return 0;
}