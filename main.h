#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <unistd.h>
typedef struct specifier
{
  char spec;
  int (*f)(va_list, char *, int *, int *);
} specifier_t;
int _printf(const char *format, ...);
void buffer_add(char *buffer, int *index, char c, int *printed);
int buffer_flush(char *buffer, int *index);
int handle_char(va_list args, char *buffer, int *index, int *printed);
int handle_string(va_list args, char *buffer, int *index, int *printed);
int handle_int(va_list args, char *buffer, int *index, int *printed);
int handle_uint(va_list args, char *buffer, int *index, int *printed);
int handle_octal(va_list args, char *buffer, int *index, int *printed);
int handle_hex_lower(va_list args, char *buffer, int *index, int *printed);
int handle_hex_upper(va_list args, char *buffer, int *index, int *printed);
int handle_binary(va_list args, char *buffer, int *index, int *printed);
#endif
