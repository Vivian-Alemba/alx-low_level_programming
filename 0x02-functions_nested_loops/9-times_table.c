#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
 *
 * Returns: 0;
 */
void times_table(void)
{
	int row, column, c;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (column = 1; column <= 9; column++)
		{
			c = (row * column);
			if ((c / 10) > 0)
			{
				_putchar((c / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((c % 10) + '0');
			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
