#include "main.h"

/**
 * main - Prints Holberton as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int count, sz;

	sz = sizeof(str) / sizeof(char);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
