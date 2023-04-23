#include "main.h"

/**
 * _printf - prints formatted output to stdout
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	unsigned int num;
	char buf[20];
	int len = 0;
	int i;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'u')
			{
				num = va_arg(args, unsigned int);
				len = 0;
				if (num == 0)
				{
					buf[len++] = '0';
				}
				else
				{
					while (num > 0)
					{
						buf[len++] = num % 10 + '0';
						num /= 10;
					}
				}
				for (i = len - 1 ; i >= 0; i--)
				{
					write(1, &buf[i], 1);
					count++;
				}
			}
			else if (*format == 'o')
			{
				num = va_arg(args, unsigned int);
				len = 0;
				if (num == 0)
				{
					buf[len++] = '0';
				}
				else
				{
					while (num > 0)
					{
						buf[len++] = (num % 8) + '0';
						num /= 8;
					}
				}
				for (i = len - 1 ; i >= 0; i--)
					write(1, &buf[i], 1);
			}
			else if (*format == 'x' || *format == 'X')
			{
				num = va_arg(args, unsigned int);
				len = 0;
				if (num == 0)
				{
					buf[len++] = '0';
				}
				else
				{
					while (num > 0)
					{
						if (*format == 'x')
							buf[len++] = "0123456789abcdef"[num % 16];
						else
							buf[len++] = "0123456789ABCDEF"[num % 16];
						num /= 16;
					}
				}
				for (i = len - 1 ; i >= 0; i--)
					write(1, &buf[i], 1);
			}
			else
			{
				write(1, "%", 1);
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
