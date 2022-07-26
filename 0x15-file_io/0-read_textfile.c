#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>

/**
 * read_textfile - read textfile.
 * @filename: name of the file.
 * @letters: number of letters.
 * Return: number of read letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, xfile;
	ssize_t c;
	char buffer[letters];

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}

	c = read(file, buffer, letters);

	if (c == -1)
	{
		return (0);
	}

	buffer[c] = '\0';


	xfile = write(STDOUT_FILENO, buffer, c);
	if (xfile != c)
	{
		return (0);
	}

	close(file);

	return (c);
}
