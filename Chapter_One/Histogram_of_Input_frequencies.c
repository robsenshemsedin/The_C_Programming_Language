#include <stdio.h>

/**
 * main - Print * for each occurance of an input character 
 *
 * Return: Always return success value.
 */
int main(void)
{
	int MAX = 100;
	char input[MAX];

	for (int i = 0; i < MAX; i++)
	{
		input[i] = getchar();
		if (input[i] == '\n')
		{
			MAX = i;
			break;
		}
	}
	for (int i = 0; i < MAX; i++)
	{
		if (input[i] != '\n')
		{
			printf("%c: ", input[i]);
			for (int j = 0; j < MAX; j++)
			{
				if (input[i] == input[j])
				{
					putchar('*');
					if (i != j)
						input[j] = '\n';
				}
			}
			printf("\n");
		}
	}
}
