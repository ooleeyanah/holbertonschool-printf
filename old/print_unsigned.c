#include "main.h"

/**
 * print_unsigned_base - converts and prints an unsigned int
 * @n: number
 * @base: base to convert to
 * @digits: character set for printing
 * Return: number of characters printed
 */
int print_unsigned_base(unsigned int n, int base, char *digits)
{
	char buffer[32];
	int i = 0, count = 0;
	if (n == 0)
		return (write(1, "0", 1));
	while (n > 0)
	{
		buffer[i++] = digits[n % base];
		n /= base;
	}
	while (i--)
		count += write(1, &buffer[i], 1);
	return (count);
}
/**
 * print_unsigned - prints unsigned decimal (%u)
 * @args: list of arguments
 * Return: chars printed
 */
int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	return (print_unsigned_base(n, 10, "0123456789"));
}
/**
 * print_octal - prints octal (%o)
 * @args: list of arguments
 * Return: chars printed
 */
int print_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	return (print_unsigned_base(n, 8, "01234567"));
}
/**
 * print_hex_lower - prints lowercase hex (%x)
 * @args: list of arguments
 * Return: chars printed
 */
int print_hex_lower(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	return (print_unsigned_base(n, 16, "0123456789abcdef"));
}
/**
 * print_hex_upper - prints uppercase hex (%X)
 * @args: list of arguments
 * Return: chars printed
 */
int print_hex_upper(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	return (print_unsigned_base(n, 16, "0123456789ABCDEF"));
}
