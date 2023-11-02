#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - This creates a file.
 * @filename: This is filename.
 * @text_content: This content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int dfile;
	int lcount;
	int store;

	if (!filename)
		return (-1);

	dfile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (dfile == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (lcount = 0; text_content[lcount]; lcount++)
		;

	store = write(dfile, text_content, lcount);

	if (store == -1)
		return (-1);

	close(dfile);

	return (1);
}
