#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>

/**
 * append_text_to_file - append text to file.
 * @filename: file name.
 * @text_content: text content.
 * Return: 1 or -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, xfile, i = 0;

	if (!(filename))
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		xfile = write(file, text_content, i);
		if (xfile == -1)
			return (-1);
	}

	close(file);
	return (1);
}
