#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

#define BUFFER_SIZE 1024

#define _MINUS 1
#define _PLUS 2
#define _ZERO 4
#define _HASH 8
#define _SPACE 16

/*function prototypes*/

/*int binary(const char *format, ...);*/
int _printf(const char *format, ...);
<<<<<<< HEAD
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
=======
ssize_t write(int fd, const void *buf, size_t count);
int flags(const char *format, ...);
int width(const char *format, int *pos, va_list args);
int length(const char *format);
int precision(const char *format, int start_pos, va_list args);

/*function helpers*/

int is_alpha(int c);
int is_digit(char);

#define length_SHORT 1
#define length_LONG 2
>>>>>>> 271101320c6374e8083f40cb460ea9ee4c282fda

#endif /* MAIN_H */
