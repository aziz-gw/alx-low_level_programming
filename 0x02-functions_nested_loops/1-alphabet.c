#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
