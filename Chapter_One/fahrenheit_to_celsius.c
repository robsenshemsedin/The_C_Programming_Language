#include <stdio.h>

/**
 * main - Convert fahrenheit to celsius using for loop and float value.
 *
 * Return: Success (0).
 */
int main(void)
{
	int farh;

	for (farh = 300; farh >= 0; farh -= 30)
		printf("%3d\t%4.3f\n", farh, 5.0 / 9.0 * (farh - 32));
	return (0);
}
