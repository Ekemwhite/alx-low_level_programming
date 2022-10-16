#include <stdio.h>
/**
 * main - Prints all the digits in ascending order, separated by a comma followed by a space.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digitA, digitB;

	for (digitA = 0; digitB < 9; digitA++)
	{
		for (digitB = digitA + 1; digitB < 10; digitB++)
		{
			putchar((digitA % 10) + '0');
			putchar((digitB % 10) + '0');

			if (digitA == 8 && digitB == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
