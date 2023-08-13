#include <stdio.h>

/**
 * main - Convert 16 consquent celsius values to respective fahrenheit value
 *        using int value.
 * Return: Success.
 */
int main(void)
{
	int farh, celsuis;
	int upper, add;

	farh = 0;
	upper = 300;
	add = 20;

	while (farh <= upper)
	{
		celsuis = 5 * (farh - 32) / 9;
		printf("%3d\t%10d\n", farh, celsuis);
		farh += 20;
	}
	return (0);
}
