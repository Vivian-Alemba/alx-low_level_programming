#include "main.h"
#include <ctype.h>

/**
 * _isalpha - function checks for alphabetic character
 * @c: The character to be print
 *
 * Return: 1 if c is a letter,lowercase or uppercase otherwise 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
