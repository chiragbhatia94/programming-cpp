#include <bits/stdc++.h>
using namespace std;

// C++ needs to have prototype defined before it can execute the fuction
// This error is recognized at compile time in C++

int main(int argc, char **argv)
{
  cout << "testing for runtime error" << endl;
  printHello();
}

void printHello()
{
  cout << "Hello" << endl;
}