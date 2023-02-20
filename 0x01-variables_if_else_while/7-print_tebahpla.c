#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print lowercase alphabets in reverse method
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
