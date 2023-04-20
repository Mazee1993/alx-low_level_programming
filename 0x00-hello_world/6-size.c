#include <stdio.h>
/**
 * main - Print out the sizes of data types in C
 * code by bwave ict
 * Rertun 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long d:
	float f;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}
