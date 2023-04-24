#include "main.h"

/**
 * _pointer - Prints a pointer
 * @list: Number of arguments
 *
 * Return: Total Length
 */

int _pointer(va_list list)
{
	char *p_buff;
	int count;

	p_buff = itoa(va_arg(list, unsigned long int), 16);

	if (!_strcmp(p_buff, "0"))
		return (print("(nil)"));

	count = print("0x");

	if (!_strcmp(p_buff, "-1"))
		count += print("ffffffffffffffff");
	else
		count += print(p_buff);

	return (count);
}
