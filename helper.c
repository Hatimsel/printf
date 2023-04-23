#include "main.h"

/**
* is_digit - checks if the char is digit or not
* @c: char to be checked
* Return: returns 1 if true else 0
*/

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	return (0);
}

/**
*
*
*
*/

int is_alpha(int c)
{
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
