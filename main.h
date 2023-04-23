#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);
void print_char(va_list args, int *count);
void print_string(va_list args, int *count);
void print_int(va_list args, int *count);
void print_binary(va_list args, int *count);
void print_unsigned(va_list args, int *count);
void print_octal(va_list args, int *count);
void print_uphexa(va_list args, int *count);
void print_lhexa(va_list args, int *count);
void print_specialS(va_list args, int *count);
void print_pointer(va_list args, int *count);

#endif /* MAIN_H */
