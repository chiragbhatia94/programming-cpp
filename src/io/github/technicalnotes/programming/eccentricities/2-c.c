#include <stdio.h>

// prototype definition
// results in compile time error if commented
double getX();

void main()
{
  // although it does not need for us to declare the function in the begining, but if not it assumes its prototype
  printHello(); // this works

  // dynamic type assumption happens in C, if the function is not declared in the top
  // compile time error
  int x = getX();
  printf("%d", &x);
}

void printHello()
{
  printf("Hello\n");
}

double getX()
{
  return 10.4;
}