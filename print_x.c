#include "main.h"
/**
 * print_lhexa - print hexa in lower cases
 * @count: pointer to the character count
 */
void print_lhexa(va_list args, int *count)
{
	char buf[20];
	unsigned int num = va_arg(args, int);
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
							buf[len++] = "0123456789abcdef"[num % 16];
						num /= 16;
					}
				}
	for (i = len - 1 ; i >= 0; i--)
					write(1, &buf[i], 1);
	count++;
}
