#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * print_string - prints string
 * @args: arguments
 * Return: char print
 */
int print_string(va_list args)
{
char *str = va_arg(args, char *);
int count = 0;
if (str == NULL)
str = "(null)";
while (*str)
count += write(1, str++, 1);
return (count);
}
