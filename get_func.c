#include "main.h"
/**
 * get_func - find correct function
 * @c: value
 * Return: function or null
 */
int (*get_func(char c))(va_list)
{
if (c == 'c')
return (print_char);
if (c == 's')
return (print_string);
return (NULL);
}
