#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - print the string
 * @format: char
 * Return: int(mean true)
 */

int _printf(const char *format, ...)
{
va_list vl;
unsigned int resultat = 0, sum = 0, i = 0;

if (format == NULL)
{
resultat = -1;
return (resultat);
}
va_start(vl, format);
while ((format != NULL))
{
if (format[i] != '%')
{
i++;
_putchar(format[i]);
<<<<<<< HEAD
}
else if (format[i + 1] == '\0')
{
return (-1);
}
else if (format[i + 1] == ' ')
{
i++;
}
else
sum = sum + calcule(vl, format[i + 1]);
i++;
}
va_end(vl);
return (sum);
=======
}
else if (format[i + 1] == '\0')
{
return (-1);
}
else if (format[i + 1] == ' ')
{
i++;
}
else
sum = sum + calcule(vl, format[i + 1]);
i++;
>>>>>>> 96cf3ecf7d42c1529b12d42831c2c8d38685fa31
}
va_end(vl);
return (sum);
:}
