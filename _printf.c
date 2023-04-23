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

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
					print_char(args, &count);
					break;
				case 's':
					print_string(args, &count);
					break;
				case 'd':
				case 'i':
					print_int(args, &count);
					break;
				case 'b':
					print_binary(args, &count);
					break;
				case '%':
					write(1, "%", 1);
					count++;
					break;
				case 'u':
					print_unsigned(args, &count);
					break;
				case 'o':
					print_octal(args, &count);
					break;
				case 'X':
					print_uphexa(args, &count);
					break;
				case 'x':
					print_lhexa(args, &count);
					break;
				case 'S':
					print_specialS(args, &count);
					break;
				case 'p':
					print_pointer(args, &count);
					break;

				default:
					write(1, "%", 1);
					write(1, &(*format), 1);
					count += 2;
					break;
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
