#include "main.h"

/**
 * _binary - Prints binary numbers
 * @list: Number of arguments
 *
 * Return: Total Length
 */

int _binary(va_list list)
{
	char *p_buff;
	int count;

	p_buff = itoa(va_arg(list, unsigned int), 2);

	count = print(p_buff);

	return (count);
}
