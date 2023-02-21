#include "main.h"
/**
 * print aplhabet - print lowercase alphabets followed by new line
 * Return: 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
	return (0);
}
