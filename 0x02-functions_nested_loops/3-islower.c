#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - a function that checks for lowercase character.
 * @c: The character to be print
 *
 * Return: 1 if c is lowercase otherwise (0);
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
