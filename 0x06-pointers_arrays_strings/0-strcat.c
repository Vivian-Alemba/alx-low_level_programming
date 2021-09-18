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
	char *result = malloc(strlen(dest) + strlen(src) + 1);

	strcpy(result, dest);
	
	strcat(result, src);

	return (result);

}
