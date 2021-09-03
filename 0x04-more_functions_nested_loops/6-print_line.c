#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: Character to be printed.
 *
 * Return: 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(45);
		}
	}
	_putchar('\n');
}
