#include "main.h"

/**
 * _integer - Prints in base 10
 * @list: Number of arguments
 *
 * Return: Total Length
 */

int _integer(va_list list)
{
	char *p_buff;
	int count;

	p_buff = itoa(va_arg(list, int), 10);

	count = print((p_buff != NULL) ? p_buff : "NULL");

	return (count);
}
