#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev -function that prints a string, in reverse
 * @s: A pointer to the character
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');


}
