#include <stdio.h>

/**
 * main - Printing the lowercase alphabet in reverse.
 *
 * Description: The code is using the putchar function twice
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
