#include "main.h"
void buffer_add(char *buffer, int *index, char c, int *printed)
{
    if (*index >= 1024)
    {
        *printed += write(1, buffer, *index);
        *index = 0;
    }
    buffer[*index] = c;
    (*index)++;
}
int buffer_flush(char *buffer, int *index)
{
    int count = 0;
    if (*index > 0)
    {
        count = write(1, buffer, *index);
        *index = 0;
    }
    return count;
}
