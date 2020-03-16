#include "holberton.h"

/**
 * _printf - print the string
 * @format: char
 * Return: int(mean true)
 */

int _printf(const char *format, ...)
{
va_list vl;
int resultat, sum = 0;
if (format == NULL)
resultat = -1;
return (resultat);
va_start(vl, format);
while ((format != NULL) && (format[i] != '\0'))
{
if (format[i] != '/0')
sum++;
else 
resultat = sum;

return (resultat);
}
}
