#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - changes all lowercase letters of string to uppercase
 *
 * Return: nothing
 */
char *string_toupper(char * ptr)
{
	char *s;

	for (s = ptr; *s; ++s)
	{
		if (islower(*s))
		{
			*s = toupper(*s);
		}
	}
	return ptr;

}
