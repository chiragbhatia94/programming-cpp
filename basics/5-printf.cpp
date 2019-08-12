#include <iostream>
using namespace std;

int main() {
    double doubleSum = 1234325.7654;
    // printf
	printf("%d\n", 15);
	printf("%4d\n", 15);
	printf("%.20f\n", 2.344);
	printf("%p\n", doubleSum);
	printf("%e\n", doubleSum);
	printf("%*.*f\n", 0, 3 , doubleSum);
	printf("%o\n", doubleSum);
	printf("%x\n", doubleSum);
	printf("%c\n", 'a');
	printf("%s\n", "string");
	return 0;
}