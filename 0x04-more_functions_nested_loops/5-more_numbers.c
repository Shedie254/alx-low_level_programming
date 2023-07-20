#include "main.h"
/**
  * more_numbers - print numbers from 0 to 14
  * 10 times followed by a new line
  * Return: 0 success
  */
void more_numbers(void)
{
	int j;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
			_putchar('\n');
		}
	}
}
