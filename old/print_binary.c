#include "main.h"

/**
 * print_binary - prints unsigned int in binary
 * @args: argument list
 * Return: number of characters printed
 */
int print_binary(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    int count = 0;
    char buffer[32];
    int i = 0;
    if (n == 0)
        return (write(1, "0", 1));
    while (n > 0)
    {
        buffer[i++] = (n % 2) + '0';
        n /= 2;
    }
    while (i > 0)
        count += write(1, &buffer[--i], 1);
    return (count);
}
