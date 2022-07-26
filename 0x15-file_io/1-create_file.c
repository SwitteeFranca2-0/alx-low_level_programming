#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>

/**
 * create_file - Create a file object.
 * @filename: filename.
 * @text_content: txt content.
 * Return: int.
 */

int create_file(const char *filename, char *text_content)
{
	int file, xfile;
	int i =  0;

	if (filename == NULL)
		return (-1);


	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
		return (-1);



	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
		xfile = write(file, text_content, i);
		if (xfile != i)
		{
			return (-1);
		}
	}

	close(file);

	return (1);
}
