#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: A pointer to the character
 * @src: A pointer to the character
 *
 * Return: (dest)
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;
	while (*(dest + j))
	{
		j++;
	}
	for (i = 0; *(src + i) != 0; i++)
	{
		*(dest + j) = *(src + i);
		j++;
	}
	*(dest + j) = '\0';
	return (dest);
}
