#include "main.h"
/**
 * get_func - find correct function
 * @c: value
 * Return: function or null
 */
int (*get_func(char c))(va_list, char *, int *, int *)
{
    if (c == 'c')
        return (handle_char);
    if (c == 's')
        return (handle_string);
    if (c == 'd' || c == 'i')
        return (handle_int);
    if (c == 'u')
        return (handle_uint);
    if (c == 'o')
        return (handle_octal);
    if (c == 'x')
        return (handle_hex_lower);
    if (c == 'X')
        return (handle_hex_upper);
    if (c == 'b')
        return (handle_binary);
    return (NULL);
}
