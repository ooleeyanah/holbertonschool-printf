#include "main.h"
/**
 * handle_S - prints a string, converts non-printable chars
 * @args: list of arguments
 * @buffer: output buffer
 * @buf_index: current index in buffer
 * @printed: total printed char count
 */
void handle_S(va_list args, char *buffer, int *buf_index, int *printed)
{
    char *str = va_arg(args, char *);
    int i;
    char hex[3];
    if (!str)
        str = "(null)";
    for (i = 0; str[i] != '\0'; i++)
    {
        unsigned char c = str[i];
       if (c < 32 || c >= 127)
        {
            buffer_add(buffer, buf_index, '\\', printed);
            buffer_add(buffer, buf_index, 'x', printed);
            hex[0] = "0123456789ABCDEF"[c / 16];
            hex[1] = "0123456789ABCDEF"[c % 16];
            hex[2] = '\0';
            buffer_add(buffer, buf_index, hex[0], printed);
            buffer_add(buffer, buf_index, hex[1], printed);
        }
        else
        {
            buffer_add(buffer, buf_index, c, printed);
        }
    }
}
