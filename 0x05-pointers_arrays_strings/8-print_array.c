#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - function that prints elements of an array of integers
 * @a: A pointer of character
 * @n: number of elements of array to be printed.
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
