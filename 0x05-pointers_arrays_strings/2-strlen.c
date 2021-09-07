#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @s: a pointer a character we want to count
 *
 * Return: the length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
