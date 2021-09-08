#include "main.h"

/**
 * puts2 - function that prints every other character
 * @str: A pointer to the character
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		_putchar(*(str + count));
		count = count + 2;
	}


}
