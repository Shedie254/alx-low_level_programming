#include "main.h"
/**
  * print_diagonal - print a diagonol line n times
  * if n is less than or zero print new line
  *@n: The input character
  */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
{
	_putchar('\n');
return;
}

	for (i = 0; i < n; i++)
{
	for (j = 0; j < i; j++)
	{
		_putchar(' ');
}
		_putchar('\\');
		_putchar('\n');
}
}
