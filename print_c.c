#include "main.h"

/**
 * print_char - prints a character
 * @args: va_list of arguments
 * @count: pointer to the character count
 */
void print_char(va_list args, int *count)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	*count += 1;
}
