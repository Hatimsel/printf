#include "main.h"
#include <stdarg.h>

/**
* flags - checks for flags before format specifiers
*
* @format: pointer to a parameter
* @n: a pointer to an integer
* Return: returns any flag detected
*/

int flags(const char *format, int *n, ...)
{
	int flag = 0;
	const char *p = format + *n;
	char flags[] = {'+', ' ', '#', '0', '\0'};
	int flagy[] = {PLUS, SPACE, HASH, ZERO};
	va_list args;

	va_start(args, n);
	while (*p)
	{
	if (*p == '%')
	{
		for (p++; *p && !is_alpha(*p); p++)
		{
			for (int m = 0; flags[m]; m++)
			{
			if (*p == flags[m])
			{
				flag |= flagy[m];
				break;
			}
			}
		}
	}
	else
	{
		p++;
	}
	}
	va_end(args);
	*n = p - format - 1;
	return (flag);
}
