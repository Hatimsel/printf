#ifndef _MAIN_H_
#define _MAIN_H_
#include <unistd.h>

#define _MINUS 1
#define _PLUS 2
#define _ZERO 4
#define _HASH 8
#define _SPACE 16

/*int binary(const char *format, ...);*/
int _printf(const char *format, ...);
ssize_t write(int fd, const void *buf, size_t count);
int flags(const char *format, ...);



#endif
