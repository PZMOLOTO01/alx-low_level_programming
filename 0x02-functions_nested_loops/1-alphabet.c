#include "main.h"
/**
 * main - Entry point
 * print_alphabet - print the lowercase alphabets followed by new line
 */
void print_alphabet(void);
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
