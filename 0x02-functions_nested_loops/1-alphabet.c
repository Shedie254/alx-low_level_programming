#include "main.h"

/**
  * main - Entry point
  * Description: prints alphabets
  * Return: o success
  */
void print_alphabet(void);
{
	char alph;

	for(alph = 'a';alph <= 'z';alph++)
		_putchar(alph);
	_putchar('\n');
}

