/**
 * print_string - prints string
 * @args: arguments
 * Return: char print
 */
int print_string(va_list args)
{
char *str = va_arg(args, char *);
if (str == NULL)
str = "(null)";
int count = 0;
while (*str)
count += write(1, str++, 1);
return (count);
}
