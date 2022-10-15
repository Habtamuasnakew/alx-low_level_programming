#include <stdio.h>
/*
 * main- print out sizes of data type in c
 * return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
