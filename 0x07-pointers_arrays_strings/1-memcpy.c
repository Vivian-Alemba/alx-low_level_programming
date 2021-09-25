#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - a function that copies memory area
 * @dest: a pointer to the character destination
 * @src: a pointer to the character source
 * @n: number of bytes to be copied to the memory area
 *
 * Return: a pointer to the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, sizeof(n));
	return (dest);


}
