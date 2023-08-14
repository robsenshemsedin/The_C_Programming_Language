#include <stdio.h>
#define IN 1
#define OUT 0

/**
 * main - Counting words and characters of user input.
 *
 * Return: Always return success value (0).
 */
int main()
{
	int nw, nc, state;
	char c;

	nw = nc = state = 0;
	printf("Please Enter A Statement!\n");
	while ((c = getchar()) != '\n')
	{
		++nc;
		if (c == ' ' || c == '\t' || c == '\b')
			state = OUT;
		else if (state == OUT)
		{
			++nw;
			state = IN;
		}
	}
	printf("Number of character: %d\nNumber of word: %d\n", nc, nw);
	return (0);
}
