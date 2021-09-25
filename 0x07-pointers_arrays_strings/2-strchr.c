#include "main.h"
#include <string.h>

/**
 * _strchr - a function that locates a character in a string
 * @s: a pointer to the character of the string
 * @c: a pointer to the character string
 *
 * Return: a pointer to the first occurrence of the character c in the sting s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != c && s[i] != '\0'; i++)
	;
		if (s[i] != c)
		{
			return (0);
		}
		else
		{
			s = s + i;
		}

	return (s);
}
