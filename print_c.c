#include "main.h"

/**
 * _printf - prints formatted output to stdout
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int len = 0;
	char c;
	char *s;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'c')
			{
				c = va_arg(args, int);
				write(1, &c, 1);
				count++;
			}
			else if (*format == 's')
			{
				s = va_arg(args, char *);
				len = 0;
				while (*(s + len) != '\0')
				{
					len++;
				}
				write(1, s, len);
				count += len;
			}
			else if (*format == '%')
			{
				c = '%';
				write(1, &c, 1);
				count++;
			}
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}

	va_end(args);

	return (count);
}
