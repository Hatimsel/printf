#ifndef _MAIN_H_
#define _MAIN_H_
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
ssize_t write(int fd, const void *buf, size_t count);


#endif
