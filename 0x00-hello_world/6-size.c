#include <stdio.h>
/**
 * main - Entry point
 * Description: 'size of various types'
 * Return: always 0
 */
int main(void)
{
	char a;
	int n;
	long int m;
	long long int o;
	float f;
		printf("Size of a char: %lu byte(s)\n", sizeof(a));
		printf("Size of a int: %lu byte(s)\n", sizeof(n));
		printf("Size of a long int: %lu byte(s)\n", sizeof(m));
		printf("Size of a long long int: %lu byte(s)\n", sizeof(o));
		printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
