#include "main.h"

void print_number(long n, int base, int uppercase, char *buffer, int *index, int *printed)
{
    char digits[] = "0123456789abcdef";
    char digits_upper[] = "0123456789ABCDEF";
    char *set = uppercase ? digits_upper : digits;
    if (n < 0)
    {
        buffer_add(buffer, index, '-', printed);
        n = -n;
    }
    if (n >= base)
        print_number(n / base, base, uppercase, buffer, index, printed);
    buffer_add(buffer, index, set[n % base], printed);
}
int handle_int(va_list args, char *buffer, int *index, int *printed)
{
    int n = va_arg(args, int);
    print_number(n, 10, 0, buffer, index, printed);
    return 0;
}
int handle_uint(va_list args, char *buffer, int *index, int *printed)
{
    unsigned int n = va_arg(args, unsigned int);
    print_number(n, 10, 0, buffer, index, printed);
    return 0;
}
int handle_octal(va_list args, char *buffer, int *index, int *printed)
{
    unsigned int n = va_arg(args, unsigned int);
    print_number(n, 8, 0, buffer, index, printed);
    return 0;
}
int handle_hex_lower(va_list args, char *buffer, int *index, int *printed)
{
    unsigned int n = va_arg(args, unsigned int);
    print_number(n, 16, 0, buffer, index, printed);
    return 0;
}
int handle_hex_upper(va_list args, char *buffer, int *index, int *printed)
{
    unsigned int n = va_arg(args, unsigned int);
    print_number(n, 16, 1, buffer, index, printed);
    return 0;
}
int handle_binary(va_list args, char *buffer, int *index, int *printed)
{
    unsigned int n = va_arg(args, unsigned int);
    print_number(n, 2, 0, buffer, index, printed);
    return 0;
}
