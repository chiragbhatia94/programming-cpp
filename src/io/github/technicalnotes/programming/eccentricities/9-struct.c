#include <stdio.h>
#include <conio.h>
#include <string.h>

struct Student
{
  int rollno;
  char *name;
} st = {5, "become", 4, "better", 6, "jungle", 8, "ancestor", 7, "brother"};

int main(int argc, char const *argv[])
{
  struct Student s1, s2, *s3;
  s3 = (struct Student *)malloc(sizeof(struct Student));
  s1.rollno = 10;
  s1.name = "Chirag";
  return 0;
}
