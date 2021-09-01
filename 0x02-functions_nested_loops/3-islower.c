#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * int _islower - a function that checks for lowercase character.
 *
 * Return: 1 if c is lowercase
 * Return: 0 otherwise
 */
int _islower(int c)
{
	
	if(islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
