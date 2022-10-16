#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - To print number stored in the variable n whether positive or negative
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is posittive\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
