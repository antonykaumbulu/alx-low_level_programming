#include <stdio.h>
/**
 * main - Prints alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
        int letter;

        for (letter = 'a'; letter <= 'z'; letter++)
        {
                putchar(letter);
		for (letter = 'A'; letter <= 'Z'; letter++)
			putchar(letter);
        }
        putchar('\n');
        return (0);
}
