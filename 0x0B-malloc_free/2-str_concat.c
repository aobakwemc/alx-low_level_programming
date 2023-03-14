/**
 * str_concat - concatenates two strings.
 * @s1: initial string
 * @s2: string to join s1
 * Return: pointer to a newly allocated space
 * in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 * If concatenation fails; NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *joiner;
	int copy = 0, length = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	joiner = malloc(sizeof(char) * length);

	if (joiner == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		joiner[copy++] = s1[i];

	for (i = 0; s2[i]; i++)
		joiner[copy++] = s2[i];

	return (joiner);
}

