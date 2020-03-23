#include "holberton.h"
/**
 * print_c - print a char
 * @vl: variadic list
 * Return: int(mean true taille de char = 1)
 */

int print_char(va_list vl)
{
char c;

c =(va_arg(vl, int));
_putchar(c);
return (1);
}

/**
 * print_per - afiicher le symbole %
 * Return: int(mean true laffichage de  % est fait)
 */

int print_per(void)
{
char sym = '%';

return (_putchar('%'));
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
<<<<<<< HEAD
arg arr[] = {{"c", is_a_char}, {"s", is_a_string}, {"%", is_percent}, {NULL, NULL}};
int j = 0;
while (arr[j].format != NULL)
{
if (arr[j].format[0] == c)
{
return (arr[j].f(vl));
=======
format arr[] = {
{"c", print_char}, 
{"s", print_string}, 
{"%", print_per}, 
{NULL, NULL}
};
int res = 0, j = 0;
while (arr[j]->format != NULL)
{
if (arr[j]->format[0] == c)
{
return (arr[j]->f(vl));
>>>>>>> bbf322a07465b20d99a59567876f9b99bcae94bf
}
j++;
}
if (j == 0)
{
_putchar('%');
_putchar(c);
return (2);
}
res += j;
return (res);
}
