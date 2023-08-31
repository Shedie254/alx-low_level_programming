#include <stdio.h>
#include "main.h"
/**
  * print_binary - convert a number to binary
  * @n: the number to be converted to binary
  */
void print_binary(unsigned long int n)
{
	unsigned long int j = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int i = 0;

	while (j)
	{
		if (n & j)
		{
			putchar('1');
			i = 1;
		}
		else if (i)
			putchar('0');

		j >>= 1;
	}

	if (!i)
		putchar('0');
}
