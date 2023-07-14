#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: it will print if the variable is positive,negativeor zero
 * Return: (0) success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative", n);
	else if (n > 0)
		printf("%d is positive", n);
	else
		printf("%d is zero", n)

	return (0);
}
