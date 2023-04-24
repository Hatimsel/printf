#include "main.h"

/**
 * _rot - Prints the rot13'ed string
 *
 * @list: String to be encoded
 *
 * Return: Length of the encoded string
 */

int _rot(va_list list)
{
	char *p;
	int len;

	p = va_arg(list, char *);
	len = rot13((p != NULL) ? p : "(ahyy)");

	return (len);
}
