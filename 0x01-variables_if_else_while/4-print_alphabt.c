#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q an e.
 * Return: AAlways 0 (Success)
 */

int main(void)
{
	char character;
	for (character = "a"; character <= "z"; character++)
	{
		if (character != "e" && character != "q")
			putchar(character);
	}
	putchar("\n");

	return (0);
}
