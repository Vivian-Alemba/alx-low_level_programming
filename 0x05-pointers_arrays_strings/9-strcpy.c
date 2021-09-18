#include "main.h"
#include <string.h>

/**
 * *_strcpy - a function that copies the string pointed to
 * @dest: a pointer to the character
 * @src: a pointer to the character
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

for (i = 0; *src != '\0'; i++)
{
	*(dest + i) = *src;
	src++;
}

dest[i++] = *src;

return (dest);

}
