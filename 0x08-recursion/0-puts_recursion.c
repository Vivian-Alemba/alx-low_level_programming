#include "main.h"
#include <stdio.h>

/**
 *_puts_recursion- a function that prints a string, followed by a new line.
 *@s: a pointer to the string character
 *
 *Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
