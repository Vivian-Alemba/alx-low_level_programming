#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name as is
 *@name: a pointer to the name of the person
 *@f: a pointer to the function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
		{
		f(name);
		}
