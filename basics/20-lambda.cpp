#include <bits/stdc++.h>
#include "../helpers/helpers.cpp"
using namespace std;

int main()
{
    // lambda function
    vector<int> vecVals = generateRandomIntegerVector(10, 1, 50);
    sort(vecVals.begin(), vecVals.end(), [](int x, int y) { return x < y; });
    printVector(vecVals);

    // copy_if
    vector<int> evenVecVals;

    copy_if(vecVals.begin(), vecVals.end(),
            back_inserter(evenVecVals),
            [](int x) { return x % 2 == 0; });

    printVector(evenVecVals);

    int sum = 0;
    for_each(vecVals.begin(), vecVals.end(),
             [&](int x) { sum += x; });
    cout << sum << endl;

    vector<int> divisibleByVecVals;
    int divisor = 3;
    copy_if(vecVals.begin(), vecVals.end(),
            back_inserter(divisibleByVecVals),
            [divisor](int x) { return x % divisor == 0; });
    cout << "Multiples of 3: ";
    printVector(divisibleByVecVals);

    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2 = {1, 2, 3, 4, 5};
    vector<int> vec3(5);

    transform(vec1.begin(), vec1.end(), vec2.begin(), vec3.begin(),
              [](int x, int y) { return x + y; });

    printVector(vec3);

    std::function<int(int)> fib = [&fib](int n) {
        return (n < 2) ? n : fib(n - 1) + fib(n - 2);
    };

    cout << endl
         << fib(8) << endl;

    return 0;
}