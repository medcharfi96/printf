#include "holberton.h"

/**
 * _printf - print the string
 * @format: char
 * Return: int(mean true)
 */

int _printf(const char *format, ...)
{
va_list vl;
int resultat = 0, sum = 0, i = 0;
if (format == NULL)
resultat = -1;
return (resultat);
va_start(vl, format);
while ((format != NULL) && (format[i] != '\0'))
{
if (format[i] != '%')
sum++;
else if (format[i] == '%' && format[i + 1] != '\0')
{
sum++;
resultat = sum;
}
sum+=2;
}
resultat = sum;
return (resultat);
}
