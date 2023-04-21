#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
*
*
*
*
*/

int _printf(const char *format, ...)
{
	int c;
	int count;
	char *s;

	va_list args;
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(args, int);
				write(1, &c, sizeof(c));
				count++;
			}
			else if (*format == 's')
			{
				s = va_arg(args, char *);
				while (*s != '\0')
				{	
				write(1, &s, sizeof(char));
				s++;
				count++;
				}
			}
			else if (*format == '%')
			{
				write(1, format, sizeof(char));
				count++;
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}





























/**
int _printf(const char *format, ...)
{
	char j;
	int i;
	int len = strlen(format);

	va_list args;
	va_start(args, format);

	for (i = 0; i < len; i++)
	{
		if (format[i] = 'c' )
		{
			j = va_arg(args, char);
			return (j)
		}
		else if (format[i] == 's')
		{
			j = va_arg(args, char *);
			return (j);
		}
	}
	va_arg(args);
	return (count);
}*/
