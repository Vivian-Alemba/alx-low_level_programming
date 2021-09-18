#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: a pointer to the integer
 * @n: number of elements of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int start = 0, end = n - 1, temp;

	if (start < end)
	{
		temp = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = temp;
		start++;
		end--;

		reverse_array(a + 1, n - 2);
	}
}
