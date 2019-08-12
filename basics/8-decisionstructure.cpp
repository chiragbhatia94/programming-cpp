#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 1 - 18, 21, 50 , > 65
    cout << "Enter your age: ";
    int age;
    cin >> age;
    if ((age >= 1 && age <= 18) || age == 21 || age == 50 ||
        age > 65)
    {
        cout << "You belong to our age criteria." << endl;
    }
    else
    {
        cout << "Please try again next year." << endl;
    }

    if (age < 5)
    {
        cout << "Too young for school" << endl;
    }
    else if (age == 5)
    {
        cout << "Go to Kindergarten" << endl;
    }
    else if (age >= 6 && age <= 17)
    {
        int grade = age - 5;
        cout << "Go to school grade " << grade << endl;
    }
    else
    {
        cout << "Go to college" << endl;
    }
    return 0;
}