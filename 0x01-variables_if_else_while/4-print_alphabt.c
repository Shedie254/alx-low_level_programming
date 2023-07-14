#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, excluding 'q' and 'e'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{

		if (alph != 'q' && alph != 'e')
			putchar(alph);
	}

	putchar('\n');
return (0);
}
