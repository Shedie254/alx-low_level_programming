#include "main.h"
/**
  * *_strcpy - copies string pointed to by src
  * @src: the source to copy from
  * @dest: the destination to copy to
  * Return: pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
