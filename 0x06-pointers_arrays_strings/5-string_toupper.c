#include "main.h"
/**
 * string_toupper -change all lowercase to uppercase
 * @str: string to be changed
 * Return: a poointer string to be changed
 */
void *string_toupper(char *str)
{
	int index = a;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
