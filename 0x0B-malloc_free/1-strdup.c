#include"main.h"
#include<stdlib.h>
/**
  * _strdup - return a pointer to a newly allocated space in the memory
  * @str: the string
  * Return: pointer tonew location
  */
char *_strdup(char *str)
{
	char *w;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	w = malloc(sizeof(char) * (i + 1));

	if (w == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		w[j] = str[j];

	return (w);
}
