#include "main.h"

/**
* length - Checks if the format string contains a length modifier
* @format: A pointer to the format string.
*
* Return: returns the length
*/

int length(const char *format)
{
	int length = 0, index = 0;

	if (format[index] == 'l')
	{
	length = LENGTH_LONG;
	index++;
	}
	else if (format[index] == 'h')
	{
	length = LENGTH_SHORT;
	index++;
	}
	return (length);
}
