#include "main.h"

/**
 * print_last_digit - a function that prints last digit of a number.
 *@n: Character to be printed on the screen
 *
 * Return: the value of the last digit;
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
		_putchar((n % 10) + '0');
		return (n % 10);
}
