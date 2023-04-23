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
	char buf[20];
	int len = 0;
	unsigned int n;
	int i;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'b')
			{
				n = va_arg(args, unsigned int);
				len = 0;

				if (n == 0)
				{
					buf[len++] = '0';
				}
				else
				{
					while (n > 0)
					{
						buf[len++] = n % 2 + '0';
						n /= 2;
					}
				}

				for (i = len - 1 ; i >= 0; i--)
				{
					write(1, &buf[i], 1);
					count++;
				}
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
