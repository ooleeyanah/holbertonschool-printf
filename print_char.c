/**
 * print_char - prints chars
 * @args: arguments
 * Return: char print
 */
int print_char(va_list args)
{
char c = va_arg(args, int);
return (write(1, &c, 1));
}
