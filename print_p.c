#include "main.h"

/**
 * print_pointer - prints a memory address
 * @args: list of arguments
 * @count: pointer to a counter of printed characters
 */
void print_pointer(va_list args, int *count)
{
	void *ptr = va_arg(args, void *);
	unsigned long value = (unsigned long) ptr;
	char buffer[20];

	sprintf(buffer, "%llx", value);

	write(1, "0x", 2);
	*count += 2;

	write(1, buffer, strlen(buffer));
	*count += strlen(buffer);
}
