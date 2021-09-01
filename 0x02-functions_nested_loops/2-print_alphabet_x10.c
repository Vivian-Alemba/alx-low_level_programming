#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints 10times the alphabet, in lowercase.
 *
 */
void print_alphabet_x10(void)
{
	int count;
	char alph;

	for (count = 0; count <= 10; count++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
