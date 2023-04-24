#include "main.h"

/**
 * _unsigned - Prints an unsigned integer
 * @list: Number to of arguments
 *
 * Return: Total Length
 */
int _unsigned(va_list list)
{
	char *p_buff;
	int count;

	p_buff = itoa(va_arg(list, unsigned int), 10);

	count = print((p_buff != NULL) ? p_buff : "NULL");

	return (count);
}
