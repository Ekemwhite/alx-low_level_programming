#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - Entry point
 *  check on the last digit of the assigned variable
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	if(x < 5)
	printf("Last digit of %d is %d and is greater than 5", n, x);
	}
	else if (x < 6 && x != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0");
	{
	else
	printf("last digit of %d is %d and is 0", n, x)
	}

	printf("\n");

	return (0);
}
