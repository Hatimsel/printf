#include "main.h"

/**
 * _char - prints a char.
 * @list: number of arguments
 *
 * Return: 1
 */

int _char(va_list list)
{
	int hp;

	hp = va_arg(list, int);

	_putchar(hp);

	return (1);
}
