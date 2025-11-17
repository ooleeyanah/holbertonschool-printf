#include "main.h"
/**
 * _printf - prints data
 * @format: input string
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
  int (*get_func(char c))(va_list)
  {
    if (c == 'c')
      return print_char;
    if (c == 's')
      return print_string;
    if (c == '%')
      return NULL;
    return NULL;
  }
  
