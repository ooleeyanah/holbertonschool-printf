#include "main.h"
/**
 * print_S - prints a string and handles non-printable characters
 * @s: string to print
 * Return: number of characters printed
 */
int print_S(char *s)
{
    int count = 0, i;
    char c;
    char hex_digits[] = "0123456789ABCDEF";
    if (s == NULL)
        return (_printf("(null)"));
    for (i = 0; s[i] != '\0'; i++)
    {
        c = s[i];
        if (c >= 32 && c < 127)
        {
            _putchar(c);
            count++;
        }
        else
        {
            _putchar('\\');
            _putchar('x');
            _putchar(hex_digits[(unsigned char)c / 16]);
            _putchar(hex_digits[(unsigned char)c % 16]);
            count += 4;
        }
    }

    return count;
}
