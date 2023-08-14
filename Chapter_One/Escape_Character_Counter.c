#include <stdio.h>

/**
 * main - Count every scape sequence from the input of a user.
 *
 * Return: always return success with value 0.
 */
int main(void)
{
	int oc = 0;  /* other characters count*/
	int lc = 0; /* line count */
	int tc = 0; /* tab count */
	int bc = 0; /* backspace count*/
	char c = 0;

	while ((c = getchar()) != '\n')
	{
		if (c == '\n')
			++lc;
		else if (c == '\t')
			++tc;
		else if (c == '\b')
			++bc;
		else
			++oc;
	}
	printf("Other characters count is : %d\n", oc);
	printf("New line count is : %d\n", lc);
	printf("Tab count is : %d\n", tc);
	printf("Back space count is : %d\n", bc);
	return (0);
}
