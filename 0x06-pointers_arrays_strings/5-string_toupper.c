#include "main.h"
/**
 * string_toupper -change all lowercase to uppercase
 * @str: string to be changed
 * Return: a poointer string to be changed
 */
char *string_toupper(char *str)
{
	int i;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
