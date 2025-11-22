#include "main.h"
int handle_char(va_list args, char *buffer, int *index, int *printed)
{
    char c = (char)va_arg(args, int);
    buffer_add(buffer, index, c, printed);
    return 0;
}
int handle_string(va_list args, char *buffer, int *index, int *printed)
{
    char *s = va_arg(args, char *);
    int i;
    if (!s)
        s = "(null)";
    for (i = 0; s[i]; i++)
        buffer_add(buffer, index, s[i], printed);
    return 0;
}
