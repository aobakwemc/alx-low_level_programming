#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, length);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

