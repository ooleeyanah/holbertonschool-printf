#include "main.h"
int _printf(const char *format, ...)
{
    char buffer[1024];
    int buf_index = 0, printed = 0;
    int i, j;
    specifier_t table[] = {
        {'c', handle_char},
        {'s', handle_string},
        {'d', handle_int},
        {'i', handle_int},
        {'u', handle_uint},
        {'o', handle_octal},
        {'x', handle_hex_lower},
        {'X', handle_hex_upper},
        {'b', handle_binary},
	{'S', handle_S},
        {'\0', NULL}
    };
    va_list args;
    va_start(args, format);
    if (!format)
        return -1;
    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            i++;
            if (!format[i])
                break;
            for (j = 0; table[j].spec; j++)
            {
                if (format[i] == table[j].spec)
                {
                    table[j].f(args, buffer, &buf_index, &printed);
                    break;
                }
            }
            if (!table[j].spec)
                buffer_add(buffer, &buf_index, format[i], &printed);
        }
        else
        {
            buffer_add(buffer, &buf_index, format[i], &printed);
        }
    }
    printed += buffer_flush(buffer, &buf_index);
    va_end(args);
    return printed;
}
