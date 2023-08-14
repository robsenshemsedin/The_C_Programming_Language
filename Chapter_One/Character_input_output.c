#include <stdio.h>

/**
 * main - Prints inputed characters one by one until incountering /n or EOF.
 *
 * Return: Always return success.
 */
int main(void)
{
	char c;
	int i;

	printf("Insert a string or a character:\n");
	while ((c = getchar()) != '\n')
		putchar(c);
	printf("Insert a string or a character:\n");
	while ((i = getchar()) != EOF)
		putchar(i);
	return (0);
}
