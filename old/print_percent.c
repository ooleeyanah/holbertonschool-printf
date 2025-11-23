#include "main.h"
#include <unistd.h>
/**
 * print_percent - prints percentage
 * Return: number of chars
 */
int print_percent(void)
{
return (write(1, "%", 1));
}
