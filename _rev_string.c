#include "main.h"

/**
 * _rev_string - Prints a reversed string
 * @list: Number of arguments
 *
 * Return: Total Length
 */

int _rev_string(va_list list)
{
	int i, count;
	const char *str;

	str = va_arg(list, const char *);

	count = _strlen(str);

	for (i = count - 1; i >= 0; i--)
		_putchar(str[i]);

	return (count);
}
