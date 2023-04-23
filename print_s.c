#include "main.h"

/**
 * print_string - prints a string
 * @args: va_list of arguments
 * @count: pointer to the character count
 */
void print_string(va_list args, int *count)
{
	char *s = va_arg(args, char *);
	int len = 0;

	while (s[len] != '\0')
		len++;

	write(1, s, len);
	*count += len;
}
