#include "holberton.h"
#include <unistd.h>
/**
 * _printf - print the string
 * @format: char
 * Return: int(mean true)
 */
int _printf(const char *format, ...)
{
va_list vl;
int z = 0, resultat = 0, sum = 0, i = 0;

if (format == NULL)
{
resultat = -1;
return (resultat);
}
va_start(vl, format);
while ((format != NULL))
{
if (format[i] == '%')
{
i++;
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
{
z = calcule(vl, format[i +1]);
sum += z;
}
i++;
}
va_end(vl);
return (sum);
}
