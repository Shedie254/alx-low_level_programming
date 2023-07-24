/**
  * _strlen - return lenth of a string
  * @s: string to be examined
  * Return: the lenth of a string
  */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}
