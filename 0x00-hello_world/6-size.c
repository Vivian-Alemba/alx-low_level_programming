/*
 *Using printf function to print size of various types on the computer
 */

#include<stdio.h>

/**
 *main - block code
 *Return: 0.
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char:%lu byte(s) \n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s) \n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(s) \n", (unsigned long int)sizeof(c));
	printf("Size of a long long int: %llu byte(s) \n", (unsigned long long int)sizeof(d));
	printf("Size of a float: %lu byte(s) \n", (unsigned long)sizeof(e));

	return (0);
}
