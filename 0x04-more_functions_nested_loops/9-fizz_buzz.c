#include <stdio.h>
/**
  * main - prints numbers from 1 to 100 for multiples of 3
  * print fizz and for multiples of 5 print buzz for those that are multiples
  * of both print fizzbuzz
  * Description: print numbers and fizz buzz
  * Return: 0 success
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0)
	{
	printf("FizzBuzz ");
	}
	else if (i % 3 == 0)
	{
	printf("Fizz ");
	}
	else if (i % 5 == 0)
	{
	printf("Buzz ");
	}
	else
	{
	printf("%d ", i);
	}
	}
	printf("\n");

	return (0);
}
