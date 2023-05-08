#include "main.h"

/**
 * read_textfile - reads a text file and prints to POSIX stdout.
 * @filename: pointer to name of file.
 * @letters: number of letters it should read and print.
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *myBuffer;

	if (filename == NULL)
		return (0);

	myBuffer = malloc(sizeof(char) * letters);
	if (myBuffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, myBuffer, letters);
	w = write(STDOUT_FILENO, myBuffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(myBuffer);
		return (0);
	}
	free(myBuffer);
	close(o); /*always close connection to file after proccessing it*/
	return (w);
}
