#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: 1 on success, -1 on failure (file can not be created-
 * file can not be written, write “fails”, etc…).
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * If the file already exists, truncate it.
 * If filename is NULL return -1.
 * If text_content is NULL create an empty file.
 */

int create_file(const char *filename, char *text_content)
{
	int o; 
	int w; 
	int len = 0;

	if (filename == 0)
		return (-1);

	if (text_content != 0)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
