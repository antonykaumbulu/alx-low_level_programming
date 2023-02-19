#include <stdio.h>
/**
 * main - Prints alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int letter;
	char i[52] = "abcdefghijklmnopqrstuvwxyz"

	for (letter = 0; letter <= 26; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
