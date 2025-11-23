#include "main.h"
#include <unistd.h>
#include <limits.h>
#include <stdarg.h>
/**
 * print_int_rec - helper to print digits of an integer
 * @n: number to print
 * Return: number of chars printed
 */
int print_int_rec(int n)
{
    int count = 0;

    if (n / 10)
        count += print_int_rec(n / 10);

    count += print_int_digit(n % 10);
    return (count);
}
/**
 * print_int - Prints an integer from va_list
 * @args: va_list
 * Return: number of characters printed
 */
int print_int(va_list args)
{
    int n = va_arg(args, int);
    int count = 0;

    if (n == INT_MIN)
        return write(1, "-2147483648", 11);

    if (n < 0)
    {
        count += write(1, "-", 1);
        n = -n;
    }

    count += print_int_rec(n);
    return count;
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
