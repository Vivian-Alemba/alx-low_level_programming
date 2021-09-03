#include "main.h"

/**
 * print_square - A function that prints a square
 * @size: Character that is printed
 *
 * Return: 0
 */
void print_square(int size)
{
	int line1;
	int line2;

	for (line1 = 0; line1 < size; ++line1)
	{
		for (line2 = 0; line2 < size; ++line2)
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
