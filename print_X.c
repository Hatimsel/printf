#include "main.h"
/**
 * print_uphexal - print hexa in uper cases
 * @count: pointer to the character count
 */
void print_uphexa(va_list args, int *count)
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
							buf[len++] = "0123456789ABCDEF"[num % 16];
						num /= 16;
					}
				}
	for (i = len - 1 ; i >= 0; i--)
					write(1, &buf[i], 1);
	count++;
}
