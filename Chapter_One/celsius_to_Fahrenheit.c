#include <stdio.h>

/**
 * main - Convert 16 consquent celsius values to respective fahrenheit value
 *        using int value.
 * Return: Success.
 */
int main(void)
{
	float farh, celsuis;
	float upper, add;

	farh = 0;
	upper = 300;
	add = 20;

	while (farh <= upper)
	{
		celsuis = 5.0/9.0 * (farh - 32.0);
		printf("%3.1f\t%5.3f\n", farh, celsuis);
		farh += 20.0;
	}
	return (0);
}
