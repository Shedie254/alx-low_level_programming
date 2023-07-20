#include "main.h"
/**
  * more_numbers - print numbers from 0 to 14
  * 10 times followed by a new line
  * Return: 0 success
  */
void more_numbers(void)
{
	int j, i;

	j = 0;
	while (j <= 10)
	{
		i = 0;
		while (i <= 14)
		{
			_putchar(i + '0');
			i++;
		}
		_putchar('\n');
		j++;
	}
	_putchar('\n');
}
