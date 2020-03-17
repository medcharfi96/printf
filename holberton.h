#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdlib.h>
#include <stdarg.h>
typedef struct format
{
char *format;
int (*f)(va_list vl);
}frt;
int _printf(const char *format, ...);
int print_string(va_list vl);
int print_char(va_list vl);
int print_per(void);
int calcule(va_list vl, char c);
#endif
