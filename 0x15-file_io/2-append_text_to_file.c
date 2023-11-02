#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * append_text_to_file - This appends text at the end of a file
 * @filename: This is the filename.
 * @text_content: This is the added content.
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int dfile;
	int lcount;
	int store;

	if (!filename)
		return (-1);

	dfile = open(filename, O_WRONLY | O_APPEND);

	if (dfile == -1)
		return (-1);

	if (text_content)
	{
		for (lcount = 0; text_content[lcount]; lcount++)
			;

		store = write(dfile, text_content, lcount);

		if (store == -1)
			return (-1);
	}

	close(dfile);

	return (1);
}
