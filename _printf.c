#include "main.h"
/**
 * _printf - prints data
 * @format: input string
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
va_list args;
int i = 0, count = 0;
int (*f)(va_list);
if (format == NULL)
return (-1);
va_start(args, format);
while (format[i])
{
if (format[i] == '%')
{
i++;
if (format[i] == '%')
{
count += print_percent();
}
else
{
f = get_func(format[i]);
if (f)
count += f(args);
else
{
write(1, "%", 1);
write(1, &format[i], 1);
count += 2;
}
}
}
else
{
count += write(1, &format[i], 1);
}
i++;
}
va_end(args);
return (count);
}
