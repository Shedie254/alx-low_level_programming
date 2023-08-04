#include<stdio.h>
#include "main.h"
/**
  * main - print the name of the file
  * @argc: print number of things added during compiling
  * @argv: print the tings added during compilation
  * Return: 0 success
  */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
