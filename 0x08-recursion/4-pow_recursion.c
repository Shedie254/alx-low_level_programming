#include "main.h"
/**
  * _pow_recursion - print a number to power of another number
  * @x: the input number to be powered
  * @y: yhe power of x
  * Return: x power y
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
