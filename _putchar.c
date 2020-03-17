#include "holberton.h"
#include <stdio.h>
/**
 * _putchar - show the character
 * @c: char
 * Return: 1(mean true)
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
