#ifndef MAIN_H
#define MAIN_H


#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>


int _strlen(const char *);
int print(char *);
char *itoa(long int, int);
int _putchar(char);
int buffer(char);
int is_lowercase(char);
char *string_to_upper(char *);
int _strcmp(char *, char *);
int rot13(char *s);


int _printf(const char *, ...);


int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);


int _string(va_list);
int _char(va_list);
int _integer(va_list);
int _binary(va_list);
int _rot(va_list);
int _unsigned(va_list);
int _octal(va_list);
int _hexadecimal_low(va_list);
int _hexadecimal_up(va_list);
int _pointer(va_list);
int _rev_string(va_list);


/**
 * struct _format - Typedef struct
 *
 * @type: Format
 * @f: The function associated
 */

typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

#endif
