#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>

/**
 * Err_message - error message.
 * @doc: file.
 * @code: exit code.
 */
void Err_message(char *doc, int code)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", doc);
	exit(code);
}

/**
 * main - write and read.
 * @argc: argc
 * @argv: argv.
 * Return: int
 */
int main(int argc, char *argv[])
{
	int file, yfile, xfile, zfile, cfile;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file = open(argv[1], O_RDONLY);
	if (file == -1)
		Err_message(argv[1], 98);
	yfile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (yfile == -1)
		Err_message(argv[2], 99);
	xfile = 1024;
	while (xfile == 1024)
	{
		xfile = read(file, buffer, 1024);
		if (xfile == -1)
			Err_message(argv[1], 98);
		zfile = write(yfile, buffer, 1024);
		if (zfile == -1)
			Err_message(argv[2], 99);
	}
	cfile = close(file);
	if (cfile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file);
		exit(100);
	}
	cfile = close(yfile);
	if (cfile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", yfile);
		exit(100);
	}
	return (0);
}
