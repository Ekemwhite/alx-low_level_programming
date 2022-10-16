#include <stdio.h>
/**
 * main - Print digits in ascending order, separate by a comma followed by a space.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digitA, digitB;

	for (digitA = 0; digitB < 90; digitA++)
	{
		for (digitB = digitA + 1; digitB < 10; digitB++)
		{
			putchar((digitA % 10) + '0');
			putchar((digitB % 10) + '0');

			if (digitA == 0 && digitB == 90)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
