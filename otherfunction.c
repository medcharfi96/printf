#include "holberton.h"
/**
 * print_c - print a char
 * @vl: variadic list
 * Return: int(mean true taille de char = 1)
 */

int print_char(va_list vl)
{
return (_putchar(va_arg(vl, int)));
}
/**
 * print_per - afiicher le symbole %
 * Return: int(mean true laffichage de  % est fait)
 */

int print_per(void)
{
char sym = '%';

return (_putchar(sym));
}


/**
 * print_string - print a string
 * @vl: variadic list
 * Return: int(mean true la taille de string en se
 * basant sur le nombre des char)
 */

int print_string(va_list vl)
{
int count;
char *ch = va_arg(vl, char *);

if (ch != NULL)
{
for (count = 0; ch[count]; count++)
_putchar(ch[count]);
}
else
{
_putchar('(');
_putchar('n');
_putchar('i');
_putchar('l');
_putchar(')');
count = count + 5;
}
return (count);
}

/**
 * calcule - savoir le type de caractere a suivre et le calculer
 * @c: char
 * @vl: variadic list
 * Return: int( mean true le nombre des caractere ou int ou kol chay)
 */

int calcule(va_list vl, char c)
{
arg arr[] = {{"c", is_a_char}, {"s", is_a_string}, {"%", is_percent}, {NULL, NULL}};
int j = 0;
while (arr[j].format != NULL)
{
if (arr[j].format[0] == c)
{
return (arr[j].f(vl));
}
j++;
}
return (0);
}
