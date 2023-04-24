#include "main.h"

/**
 * _hexadecimal_low - Print a number in hexadecimal format in lowercase
 *
 * @list: Number of arguments
 *
 * Return: Total Length
 */
int _hexadecimal_low(va_list list)
{
	char *p_buff;
	int count;

	p_buff = itoa(va_arg(list, unsigned int), 16);

	count = print((p_buff != NULL) ? p_buff : "NULL");

	return (count);
}
