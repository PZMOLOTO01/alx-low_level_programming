#include "main.h"
/**
 * string_toupper - Change all lowercase to uppercase
 * @str: pointer
 * Return: n
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
