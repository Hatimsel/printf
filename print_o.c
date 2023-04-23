#include "main.h"
/**
 * print_uns - prints octal
 * @args: va_list of arguments
 * @count: pointer to the character count
 */
void print_octal(va_list args, int *count)
{
	char buf[20];
	unsigned int num = va_arg(args, unsigned int);
	int len = 0;
	int i;

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
	count++;
}
