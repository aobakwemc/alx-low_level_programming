/**
 * int_index - searches for an integer.
 * @array: array to search
 * @size: size of array
 * @cmp: pointer to function used to compare values
 * Return: index of the first element for which the cmp
 * function does not return 0
 * else, if no element matches, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size > 0 && cmp && size && array)
		for (a = 0; a <= size; a++)
			if (cmp(array[a]))
				return (a);
	return (-1);
}
