#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings
 *@dest: a pointer to the destination of the string
 *@src: a pointer to the source of the string
 *@n: shows number of bytes
 *
 * Return: (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int length;
	int i;

	length = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
{
	dest[length + i] = src[i];
}
dest[length + i] = '\0';
return (dest);
}
