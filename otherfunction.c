#include "holberton.h"

/**
  * calcule - savoir le type de caractere a suivre
  * @:char
  * @p:pointer
  * Return: int
  */

int calcule(va_list vl, char c)
{
arg arr[] = {{"c", is_a_char},{"s", is_a_string},{"%", is_percent},{NULL, NULL}};
int j = 0;
while (array[j].format != NULL)
{
if (array[j].format[0] == c)
{
return (array[j].f(vl));
}
j++;
}
return (0);
}
