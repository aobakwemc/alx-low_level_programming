/**
 * array_range - creates an array of integers.
 * @min: The first array value
 * @max: The last value
 * Return: pointer to the newly created array
 * If min > max --> NULL
 * If malloc fails --> NULL
 */
int *array_range(int min, int max)
{
	int i, len, *a;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	a = malloc(sizeof(int) * len);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < len; i++, min++)
	{
		a[i] = min;
	}

	return (a);
}
