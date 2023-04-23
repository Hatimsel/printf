#include "main.h"

/**
* width - the width of the printed element
*
* @format: the argument that contains format specifiers
* @pos: position in the string
* @args: arguments to come after
* Return: returns the width
*/

int width(const char *format, int *pos, va_list args)
{
	int i, width = 0;

	for (i = *pos + 1; format[i] != '\0'; i++)
	{
		if (isdigit(format[i]))
		{
		width *= 10;
		width += format[i] - '0';
		}
		else if (format[i] == '*')
		{
		i++;
		width = va_arg(args, int);
		break;
		}
		else
		{
		break;
		}
	}
	*pos = i - 1;
	return (width);
}
