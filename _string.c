#include "main.h"

/**
 * _string - Prints a string
 * @list: number of arguments
 * Return: The String length.
 */

int _string(va_list list)
{
	char *p;
	int len;

	p = va_arg(list, char*);
	len = print((p != NULL) ? p : "(null)");

	return (len);
}
