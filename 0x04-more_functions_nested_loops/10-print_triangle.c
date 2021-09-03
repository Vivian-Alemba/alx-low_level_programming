#include "main.h"

/**
 * print_triangle - A function that prints a triangle
 * @size: Character that is printed
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int line1;
	int line2;

	for (line1 = 1; line1 <= size; line1++)
	{
		for (line2 = size; line2 > line1; line2--)
		{
			_putchar(' ');
		}
		for ( ; line2 > 0; line2--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
