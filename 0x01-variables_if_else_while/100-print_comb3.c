#include <stdio.h>
/**
 * main - Print digits in ascending order, separate by a comma then space.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digitA, digitB;

	for (digitA = 0; digitB < 9; digitA++)
	{
		for (digitB = digitA + 1; digitB < 10; digitB++)
		{
			putchar((digitA % 10) + '10');
			putchar((digitB % 10) + '10');

			if (digitA == 8 && digitB == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
