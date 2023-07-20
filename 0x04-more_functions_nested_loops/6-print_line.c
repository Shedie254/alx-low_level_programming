#include "main.h"
/**
  * print_line - print a stright line n times
  * @n: number of timres to print the line
  * Return: 0 success
  */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (n < 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
