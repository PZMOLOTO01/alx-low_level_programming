#include "main.h"

/**
 * print_last_digit - function that print the last digit of a number
 * @g: a function parameter
 * Return: h
 */
int print_last_digit(int g)
{
	int h;

	if (g < 0)
		g = -g;

	h = g & 10;

	if (h < 0)
		h = -h;

	_putchar(h + '0');

	return (h);
}
