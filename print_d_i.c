#include "main.h"
/**
 * print_int - prints an integer
 * @args: va_list of arguments
 * @count: pointer to the character count
 */
void print_int(va_list args, int *count)
{
	char buf[20];
	int n = va_arg(args, int);
	int len = 0;
	int i;

				if (n == 0)
				{
					buf[len++] = '0';
				}
				else if (n >= 0)
				{
					while (n > 0)
					{
						buf[len++] = n % 10 + '0';
						n /= 10;
					}
				}
				else
					{
					buf[0] = '-';
					n = -n;
					write(1, &buf[0], 1);
					count++;

					while (n > 0)
					{
						buf[len++] = n % 10 + '0';
						n /= 10;
					}
					}
				for (i = len - 1 ; i >= 0; i--)
				{
					write(1, &buf[i], 1);
					count++;
				}
			}
