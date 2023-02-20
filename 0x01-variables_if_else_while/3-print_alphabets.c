#include <stdio.h>
/**
 * main - Prints alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int letter;
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (letter = 0; letter < 52; letter++)
		putchar(alp[letter]);
	putchar('\n');
	return (0);
}
