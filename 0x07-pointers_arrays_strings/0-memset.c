#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: a pointer to the character of strings
 * @b: a character
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	for ( ; i < n; i++)
	{
		s[i] = '\0';
	}
	return (s);
}
