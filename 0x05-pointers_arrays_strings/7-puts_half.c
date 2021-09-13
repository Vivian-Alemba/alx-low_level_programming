#include "main.h"
#include <string.h>

/**
 * puts_half - function that prints half of a string
 * @str: a pointer to the character
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		str++;
	}
	i = i / 2;

	for (i = i; i != '\0'; i--)
	{
		_putchar(*(str - i));
	}
	_putchar('\n');
}
