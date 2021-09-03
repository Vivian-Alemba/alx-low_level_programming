#include "main.h"

/**
 * more_numbers - a function that prints 10 times numbers from 0-14
 *
 * Return: 0
 */
void more_numbers(void)
{
	int c, n;

	for (c = 0; c < 10; c++)
	{
		for (n = 0; n < 14; n++)
		{
			if (n / 10 != 0)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}

}
