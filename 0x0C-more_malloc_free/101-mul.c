#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_number(const char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 3 || strcmp(argv[1], "mul") != 0 || !is_number(argv[2]) || !is_number(argv[3]))
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[2]);
	num2 = atoi(argv[3]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
