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
	int n;
	char c;
	char *s;
	int i;

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
			else if (*format == 'd' || *format == 'i')
			{
				n = va_arg(args, int);
				len = 0;
				if (n == 0)
				{
					buf[len++] = '0';
				}
				else
				{
					if (n < 0)
					{
					/* i made my changes over here to make the '-' at the begining */
						buf[0] = '-';
						n = -n;
					}
				/*this one as well*/
				/*betty gatlik a sidi more than 40 line in a function ma3jbathach*/
				write(1, &buf[0], 1);
					count++;
					while (n > 0)
					{
						buf[len++] = n % 10 + '0';
						n /= 10;
					}
				}
				for (i = len - 1; i >= 0; i--)
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
