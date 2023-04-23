#include "main.h"

/**
 * print_specialS - prints formatted output to stdout
 * @args: arguments list
 * @count: pointer to the character count
 */
void print_specialS(va_list args, int *count)
{
	char *str = va_arg(args, char *);

	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			write(1, "\\x", 2);
			*count += 2;
			printf("%.2X", (unsigned char)*str);
			*count += 2;
		}
		else
		{
			write(1, str, 1);
			*count += 1;
		}
		str++;
	}
}
