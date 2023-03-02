#include "main.h"
/**
 * string_toupper -change all lowercase to uppercase
 * @str: string to be changed
 * Return: a pointer string to be changed
 */
char *string_toupper(char *str)
{
	int i = 0;

	for (str = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
	}
	return (str);
}
