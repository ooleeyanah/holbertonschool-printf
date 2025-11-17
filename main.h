#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);
int (*get_func(char c))(va_list);
#endif
