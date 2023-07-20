#include "main.h"
/**
  * print_square - print a square using # n times
  * if n is less than or 0 print new line
  * @size: the number of times to print
  */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
