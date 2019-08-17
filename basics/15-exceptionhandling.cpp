#include "../helpers/helpers.cpp"
using namespace std;

int main()
{
    // Division by zero
    double n1, n2;
    cout << "Enter 2 numbers: ";
    cin >> n1 >> n2;
    try
    {
        if (n2 == 0)
        {
            if (n1 == 0)
            {
                throw runtime_error("Both n1 and n2 are zero, please provide correct inputs!");
            }
            throw("Divide by zero is not possible");
        }
        double result = n1 / n2;
        cout << result;
    }
    catch (exception &e)
    {
        cout << ("exception occured: %s", e.what());
    }
    catch (const char *e)
    {
        cerr << ("exception: %s", e);
    }
    catch (...)
    {
        cout << "Unknown error";
    }
    return 0;
}