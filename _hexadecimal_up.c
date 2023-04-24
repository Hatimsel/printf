#include "main.h"

/**
 * _hexadecimal_upp - Prints in hexadecimal format
 *
 * @list: Number of arguments
 *
 * Return: Total Length
 */

int _hexadecimal_up(va_list list)
{
	char *p_buff;
	int count;

	p_buff = itoa(va_arg(list, unsigned int), 16);
	p_buff = string_to_upper(p_buff);

	count = print((p_buff != NULL) ? p_buff : "NULL");

	return (count);
}
