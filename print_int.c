#include "main.h"
#include <unistd.h>
#include <limits.h>
#include <stdarg.h>

/**
 * print_int - Prints an integer to stdout
 * @args: va_list containing the integer
 *
 * Return: Number of characters printed
 */
int print_int(va_list args)
{
    int n = va_arg(args, int);
    int count = 0;
    if (n == INT_MIN)
    {
        count += write(1, "-2147483648", 11);
        return (count);
    }
    if (n < 0)
    {
        count += write(1, "-", 1);
        n = -n;
    }
    if (n / 10)
        count += print_int_digit(n / 10);

    count += print_int_digit(n % 10);
    return (count);
}

/**
 * print_int_digit - Prints a single digit
 * @d: Digit to print (0–9)
 * Return: Number of characters printed (always 1)
 */
int print_int_digit(int d)
{
    char c = d + '0';

    return (write(1, &c, 1));
}
