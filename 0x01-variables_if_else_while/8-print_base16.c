#include <stdio.h>
/**
 * main - Hexadecimal numbers
 *
 * Return: 0
 */
int main(void)
{
	int num;
	int num2;

	for (num2 = 0; num2 <= 9; num2++)
		putchar(num2);
	for (num = 'a'; num <= 'f'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
