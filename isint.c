#include <stdio.h>
#include <ctype.h>

/**
 * isint - This checks if a string represent an integer
 * @str: String to check
 * Return: 1 if str represents an integer else 0
 */

int isint(const char *str)
{
	if (*str == '-' || *str == '+')
		++str;

	if (!*str)
		return (0);

	while (isdigit(*str))
		++str;

	return (!*str);
}
