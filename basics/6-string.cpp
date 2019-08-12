#include <iostream>
#include <string>
using namespace std;

int main (int argc, char **argv) {
    int n1;
    cout << "Number 1: ";
    cin >> n1;
    string s;
    cout << "Number 2: ";
    cin >> s;

    int n2 = stoi(s);

    int add = n1 + n2;

    cout << "n1 + n2 = " << add << endl;
    return 0;
}