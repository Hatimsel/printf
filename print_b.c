#include "main.h"

/**
 * print_binary - prints a binary number
 * @args: va_list of arguments
 * @count: pointer to the character count
 */
void print_binary(va_list args, int *count)
{
	char buf[20];
	unsigned int n = va_arg(args, unsigned int);
	int len = 0;
	int i;

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
		*count += 1;
	}
}
