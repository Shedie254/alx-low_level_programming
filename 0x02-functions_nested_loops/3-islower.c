#include "main.h"

/**
  *  _islower - check if a letter is lower or upper case
  * @c: The character to be checked
  *
  * Return: 1 if a character is lower case, 0 otherwise
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

