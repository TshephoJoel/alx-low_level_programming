#include <stdio.h>

/**
 * main - Printing all the numbers of base 16 in lowercase.
 *
 * Description: Using the putchar function,all code in main F
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
