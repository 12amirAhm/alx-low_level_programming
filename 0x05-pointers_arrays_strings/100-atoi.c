#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */

int _atoi(char *s)
{
	int i;
	int respond = 0;
	int single = -1;
	int brk = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			single = single * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			respond = respond * 10;
			respond -= (s[i] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	respond = single * respond;
	return (respond);
}
