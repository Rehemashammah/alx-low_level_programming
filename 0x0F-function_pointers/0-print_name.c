#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: String argument
 * @f: pointer to a function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
