#include "main.h"
/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/


void _puts(char *str)
{
	int stri = 0;

	while (str[stri])
	{
		_putchar(str[stri]);
		stri++;
	}

	_putchar('\n');
}
