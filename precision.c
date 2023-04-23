#include "main.h"

/**
* precision - checks if there is a precision specifier
* @format: format string
* @start_pos: the starting point
* @args: arguments to be added
*
* Return: returns precision
*/

int precision(const char *format, int start_pos, va_list args)
{
	int new_pos = start_pos;
	int precision = -1;

	if (format[new_pos] != '.')
	{
	return (precision);
	}
	precision = 0;
	new_pos++;
	while (format[new_pos] != '\0')
	{
		if (is_digit(format[curr_pos]))
		{
			precision *= 10;
			precision += format[curr_pos] - '0';
			new_pos++;
		}
		else if (format[curr_pos] == '*')
		{
			precision = va_arg(args, int);
			new_pos++;
			break;
		}
		else
		{
		break;
		}
	}
	start_pos = new_pos;
	return (precision);
}
