#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  char *s = "hello world";
  printf("%s\n", s);

  char s2[30] = "hello, world";
  printf("%s\n", s2);
  s2[12] = '!';
  printf("%s\n", s2);

  // s[11] = '!';
  // printf("%s\n", s); // this messes up the program

  char *p = s + 5;
  printf("length of p = %d & s = %d\n", strlen(p), strlen(s));
  return 0;
}
