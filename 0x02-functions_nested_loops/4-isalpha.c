#include "main.h"

/**
  * _isalpha - checks if a character is an alphabet
  * @c: The character to be checked
  *
  *Return: 1 if a letter else 0
  */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
