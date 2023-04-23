#ifndef _MAIN_H_
#define _MAIN_H_
#include <unistd.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024

#define _MINUS 1
#define _PLUS 2
#define _ZERO 4
#define _HASH 8
#define _SPACE 16

/*function prototypes*/

/*int binary(const char *format, ...);*/
int _printf(const char *format, ...);
ssize_t write(int fd, const void *buf, size_t count);
int flags(const char *format, ...);
int width(const char *format, int *pos, va_list args);
int precision(const char *format, int start_pos, va_list args);

/*function helpers*/

int is_alpha(int c);
int is_digit(char);

#define length_SHORT 1
#define length_LONG 2


#endif
