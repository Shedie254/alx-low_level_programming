#include "main.h"

/**
  * times_table - prints the times table starting from 0
  */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int product = i * j;

			if (product <= 9)
			{
				_putchar(product + '0');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
