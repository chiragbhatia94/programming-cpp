#include "../helpers/helpers.cpp"
#include <cmath>
using namespace std;

int main()
{
    cout << "abs(-10): " << abs(-10) << endl;
    cout << "max(4, 23): " << max(4, 23) << endl;
    cout << "min(-10, 23): " << min(-10, 23) << endl;
    cout << "fmax(-10.23, -10.22): " << fmax(-10.23, -10.22) << endl;
    cout << "fmin(-10.33, -1.22): " << fmin(-10.33, -1.22) << endl;
    cout << "exp(1): " << exp(1) << endl;
    cout << "exp2(1): " << exp2(1) << endl;
    cout << "log(20.079): " << log(20.079) << endl;
    cout << "log10(100): " << log10(100) << endl;
    cout << "log2(8): " << log2(8) << endl;
    cout << "pow(2, 3): " << pow(2, 3) << endl;
    cout << "sqrt(100): " << sqrt(100) << endl;
    cout << "cbrt(1000): " << cbrt(1000) << endl;
    cout << "hypot(2, 3): " << hypot(2, 3) << endl;
    cout << "ceil(10.33): " << ceil(10.33) << endl;
    cout << "floor(8.023): " << floor(8.023) << endl;
    cout << "round(8.324733): " << round(8.324733) << endl;
    return 0;
}