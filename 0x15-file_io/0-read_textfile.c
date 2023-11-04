#include "main.h"

/**
 *read_textfile - function that reads a text file and
 *prints it to the POSIX standard output
 *@letters:  number of letters it should read and print
 *@filename: name of file
 *
 *Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o;
	ssize_t r;
	ssize_t w;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (o == -1 || r == -1 || w == -1 || r != w)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(o);

	return (w);
}
