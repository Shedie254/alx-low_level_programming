#include "main.h"
/**
  * print_most_numbers - print numbers except 2 and 4
  * Return: 0 succes
  */
void print_most_numbers(void)
{
	int j;

	for (j = 0; j >= 9; j++)
		if (j != 2 || j != 4)
			_putchar(j + '0');
	_putchar('\n');
}
