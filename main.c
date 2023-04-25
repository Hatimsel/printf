#include <limits.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * This is our test file for our _printf function
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	printf("STANDAR PRINTF FUNCTION OUTPUT'S\n\n");
	len2 = printf("This sentence is printed with the standar printf.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	printf("Length (using '%%i' and '%%d'):  [%d, %i]\n", len2, len2);
	printf("Negative number (using '%%i' or '%%d'):  [%d]\n", -762534);
	printf("Unsigned (using (using '%%u'):  [%u]\n", ui);
	printf("Unsigned octal (using '%%o'):  [%o]\n", ui);
	printf("Unsigned hexadecimal (using '%%x' and '%%X'): [%x, %X]\n", ui, ui);
	printf("Character (using '%%c'):  [%c]\n", 'H');
	printf("String (using '%%s'):  [%s]\n", "I am a string !");
	printf("Address (using '%%p'):  [%p]\n", addr);
	len2 = printf("Percent (using '%%%%'):  [%%]\n");
	printf("Len (using '%%d'):  [%d]\n", len2);
	printf("Binary (using '%%b'):  [%b]\n", 98);
	printf("***There is no format specifier in 'C' for [%%r] [%%S] ***\n");
	printf("\n");
	printf("OUR UPDATED PRINTF FUNCTION'S OUTPUT (_PRINTF)\n\n");
	len = _printf("This sentence is printed with our _printf.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length (using '%%i' and '%%d'):  [%d, %i]\n", len, len);
	_printf("Negative (using '%%i' and '%%d'):  [%d]\n", -762534);
	_printf("Unsigned (using '%%u'):  [%u]\n", ui);
	_printf("Unsigned octal (using '%%o'):  [%o]\n", ui);
	_printf("Unsigned hexadecimal (using '%%x' and '%%X): [%x, %X]\n", ui, ui);
	_printf("Character (using '%%c'):  [%c]\n", 'H');
	_printf("String (using '%%s'):  [%s]\n", "I am a string !");
	_printf("Address (using '%%p'):  [%p]\n", addr);
	len = _printf("Percent (using '%%%%'):  [%%]\n");
	_printf("Len (using '%%d'):  [%d]\n", len);
	_printf("Binary (using '%%b'):  [%b]\n", 98);
	_printf("Reverse (using '%%r'):  [%r]\n", "I'm a string in reverse");
	_printf("Forbiden ASCII (using '%%S): %S\n", "Best\nSchool");
	return (0);
}
