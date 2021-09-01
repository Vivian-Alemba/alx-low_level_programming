#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints 10times the alphabet, in lowercase.
 *
 */
void print_alphabet_x10(void)
{
	int t;
	char a;

	for (t = 0; t <= 10; t++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
