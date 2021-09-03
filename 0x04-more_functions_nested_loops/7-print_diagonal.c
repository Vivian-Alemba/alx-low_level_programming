#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: Character that is being printed
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int line1;
	int line2;

	for (line1 = 0; line1 < n; ++line1)
	{
		for (line2 = 0; line2 < line1; ++line2)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
if (n <= 0)
{
	_putchar('\n');
}
}
