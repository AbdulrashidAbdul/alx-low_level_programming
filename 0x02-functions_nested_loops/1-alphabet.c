#include "main.h"

/**
 *print_alphabet - prints_alphabet, in lowercase, followed by a new line.
 *
 * Return: always 0 (Success)
**/

void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)

{
_putchar(c);
}
_putchar('\n');
}
