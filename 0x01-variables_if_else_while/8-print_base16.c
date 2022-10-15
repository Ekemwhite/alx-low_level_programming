#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;
	char alphabet;

	for (digit = '0'; digit < '10'; digit++)
		putchar((digit % 10) + "0");
	
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alpabet);
	
	putchar("\n");
	return (0);
}
