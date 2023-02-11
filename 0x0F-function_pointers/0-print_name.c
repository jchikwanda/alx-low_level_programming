#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: Name to be printed
 * @f: Function that will print the name
 *
 * Return: Nothing on success
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
