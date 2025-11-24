## Description

This is a project to create a customised printf function in C, named _printf. 
It handles formatted output conversion and printing the following format specifiers:
%c – character

%s – string

%d, %i – signed integers

%u – unsigned integers

%o – octal

%x, %X – hexadecimal

%b – binary

%S – prints strings with non-printable characters as \xHH

%% – prints a literal %

For Task 5 onwards, there is a 1024 char buffer to minimise the amount of write() in the code.

## Project Requirements

Allowed editors: vi, vim, emacs

All files compiled on Ubuntu 20.04 LTS using:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c


Code must follow Betty style guidelines (NO LONGER APPLICABLE)

No global variables

No more than 5 functions per file (recommended)

### Authorized functions:

write

malloc, free

va_start, va_end, va_arg

_putchar (if you create one)

## Installation

### Clone the repository and compile:

git clone https://github.com/yourusername/printf.git
cd printf
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c

### To use _printf in your project:

#include "main.h"

int main(void)
{
    _printf("Hello %s!\n", "World");
    return (0);
}

### Compile with your test file:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c test.c

## Examples

### %s (string specifier)
_printf("Hello %s!\n", "World");  

/* Output: Hello World! */

### %c (char specifier)
_printf("Character: %c\n", 'A');

/* Output: Character: A */

### %d (decimal specifier)
_printf("Decimal: %d\n", 1024);

/* Output: Decimal: 1024 */

### %S (custom conversion specifier)
_printf("%S\n", "Best\nSchool");

/* Output: Best\x0ASchool */

###  %X (hexadecimal specifier)
_printf("Hex: %X\n", 255);

/* Output: Hex: FF */

### %b (binary specifier)
_printf("Binary: %b\n", 98);

/* Output: Binary: 1100010 */

## Testing

To test the _printf function and its different format cases, this basic test can be utilized:

#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c main.c -o printf_test

echo "Running tests..."
./printf_test

To assess accuracy, compare _printf with printf:

_printf("Testing %d vs printf\n", 123);

printf("Testing %d vs printf\n", 123);

To check memory errors:

valgrind ./printf_test

### Project Structure

.
├── main.h
├── _printf.c
├── buffer.c
├── handle_char.c
├── handle_string.c
├── handle_S.c
├── handle_int.c
├── handle_uint.c
├── handle_hex.c
├── handle_octal.c
├── handle_binary.c
├── utils.c
└── README.md

### Authors
Uliana Deshin (@ooleeyanah)

Patrick Macabulos (@psmacabulos)
