#include <stdio.h>
/**
 * main - Prints alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	in letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar("\n");
}
