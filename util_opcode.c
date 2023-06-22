#include <ctype.h>
#include "monty.h"

/**
 * fnIsDigit - checks if a string is a digit
 * @string: string to check
 *
 * Return: 1 if success, 0 if not
 */
int fnIsDigit(char *string)
{
	if (!string || *string == '\0')
		return (0);
	if (*string == '-')
		string++;
	while (*string)
	{
		if (isdigit(*string) == 0)
			return (0);
		string++;
	}
	return (1);
}
/**
 * fnIsNumber - checks if a string is a number
 * @vstr: provided string
 *
 * Return: 1 if the string is a number, else, 0.
 */
int fnIsNumber(char *vstr)
{
	int i;

	if (!vstr)
		return (0);

	for (i = 0; vstr[i]; i++)
		if (i < '0' || i > '9')
			return (0);

	return (1);
}
