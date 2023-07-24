/**
  * swap_int - swaps the value of two integers
  * @a: input number
  * @b:input number
  */
void swap_int(int *a, int *b)
{
	int tmp_val;

	tmp_val = *a;
	*a = *b;
	*b = tmp_val;
}
