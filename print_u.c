#include "main.h"
/**
 * print_uns - prints unsined int
 * @args: va_list of arguments
 * @count: pointer to the character count
 */
void print_unsigned(va_list args, int *count)
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
