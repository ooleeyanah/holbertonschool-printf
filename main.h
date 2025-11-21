#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_percent(void);
int print_binary(va_list args);
int (*get_func(char c))(va_list);
int print_int_rec(int n);
int print_int_digit(int d);
#endif
