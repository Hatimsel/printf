#include "main.h"

/**
 * print_octal - Print an octal
 * @list: Numbers to print
 *
 * Return: total Length
 */
int _octal(va_list list)
{
	char *p_buff;
	int count;

	p_buff = itoa(va_arg(list, unsigned int), 8);

	count = print((p_buff != NULL) ? p_buff : "NULL");

	return (count);
}
