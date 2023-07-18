#include "main.h"

/**
  * print_alphabet_x10 - prints alphabets 10 times in lowcase
  * Return: 0 success
  */
void print_alphabet_x10(void);
{
	char alph;

	for (int no = '0'; no <= '10'; no++)
	{

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
	}
}

