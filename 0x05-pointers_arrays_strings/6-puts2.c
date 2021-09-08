#include "main.h"
#include <string.h>

/**
 * puts2 - function that prints every other character
 * @str: A pointer to the character
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i;
	int length = strlen(str);

	for (i = 0; i < length; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');


}
