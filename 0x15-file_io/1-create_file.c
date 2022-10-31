#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: The filename to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,-
 * file can not be written, write “fails”, etc…).
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * If the file already exists, truncate it.
 * If filename is NULL return -1.
 * If text_content is NULL create an empty file.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int fdw;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fdo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fdo < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	fdw = write(fdo, text_content, len);
	close(fdo);
	if (fdw < 0)
		return (-1);
	return (1);
}

