#include "main.h"
/**
 * _puts - prints a string with newline
 * @str: the string to print
 * @_putchar: the function to print the string
 *
 * Return: void
 */
int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
	return (str - a);
}
int _putchar(char c)
{
static int i;
static char buf[OUTPUT_BUF_SIZE];

if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
{
   write(1, buf, i);
i = 0;
}
if (c != BUF_FLUSH)
buf[i++] = c;
return (1);
}

