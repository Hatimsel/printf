#include "main.h"


/**
 * _strlen - Calculate the length of a string
 * @str: String
 *
 * Return: Length
 */

int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;

	return (i);
}

/**
 * print - print char.
 * @str: string.
 *
 * Return: string length.
 */

int print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);

	return (i);
}

/**
 * is_lowercase - Check if the character are in lowercase
 * @c: Character
 * Return: 1 or 0
 */

int is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
* string_to_upper - Converts the string to uppercase

* @s: String to be converted

* Return: String uppercase
*/
char *string_to_upper(char *s)
{
 	int i;
 	for (i = 0; s[i] != '\0'; i++)
 	{
 	if (is_lowercase(s[i]))
 	{
 	s[i] = s[i] - 32;
 	}
 	}
 	return (s);
}

/**
* _strcmp - Compare two strings
*
* @s1: String 1
* @s2: String 2
* Return: returns an integer
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
	if (s1[i] != s2[i])
	return (s1[i] - s2[i]);
	}
	return (0);
}

/**
* rot13 - Encoding via rot13.
*
* @s: String to be enconded
* Return: returns the encoded string
*/

int rot13(char *s)
{
	int i;
	int j;
	char *normal, *rot13;

	normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; normal[j] != '\0'; j++)
		{
		if (s[i] == normal[j])
		{
			_putchar(rot13[j]);
			break;
		}
		}
		if (!normal[j])
		_putchar(s[i]);
	}
	return (i);
}
