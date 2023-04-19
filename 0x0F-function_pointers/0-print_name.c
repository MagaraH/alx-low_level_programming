#include "function_pointers.h"
/**
 *  print_name - function that prints a name.
 *
 * @name: Function name to be printed
 * @f: pointer to a function
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		(*f)(name);
}
