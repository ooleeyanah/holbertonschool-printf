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
 if (c == 'd' || c == 'i')
   return (print_int);
 if (c == 'u')
   return (print_unsigned)
     if (c == 'o')
       return (print_octal);
 if (c == 'x')
   return (print_hex_lower);
 if (c == 'X')
   return (print_hex_upper);
 if (c == 'b')
   return (print_binary);
 return (NULL);
}
