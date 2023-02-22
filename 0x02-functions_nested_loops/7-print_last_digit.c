#include "main.h"

/**
 * print_last_digit - function that print the last digit of a number
 * @g: a function parameter
 * Return: h
 */
int print_last_digit(int g)
{
	int h;

	h = g & 10;
	if (g < 0)
		h = -h;
	return (h);
}

