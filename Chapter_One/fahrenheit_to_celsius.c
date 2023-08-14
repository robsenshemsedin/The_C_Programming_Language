#include <stdio.h>

#define DECRIMENT 30
#define MAXVALUE 300
#define LOWER 0
/**
 * main - Convert fahrenheit to celsius using for loop and float value.
 *
 * Return: Success (0).
 */
int main(void)
{
	int farh;

	for (farh = MAXVALUE; farh >= LOWER; farh -= DECRIMENT)
		printf("%3d\t%4.3f\n", farh, 5.0 / 9.0 * (farh - 32));
	return (0);
}
