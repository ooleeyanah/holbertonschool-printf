#include "main.h"
#include <stdio.h>
#include <stdarg.h>
int main(void)
{
  int len1, len2;
    len1 = _printf("String test: %s\n", "Hello");
    len2 = printf("String test: %s\n", "Hello");
    _printf("Return value: %c%d\n", ' ', len1);
    printf("Return value: %c%d\n\n", ' ', len2);
    len1 = _printf("Char test: %c %c %c\n", 'A', 'B', 'C');
    len2 = printf("Char test: %c %c %c\n", 'A', 'B', 'C');
    _printf("Return value: %c%d\n", ' ', len1);
    printf("Return value: %c%d\n\n", ' ', len2);
    len1 = _printf("Percent test: %%\n");
    len2 = printf("Percent test: %%\n");
    _printf("Return value: %c%d\n", ' ', len1);
    printf("Return value: %c%d\n\n", ' ', len2);
    len1 = _printf("Unknown specifier: %z\n");
    _printf("Return value: %c%d\n", ' ', len1);

    return (0);
}
