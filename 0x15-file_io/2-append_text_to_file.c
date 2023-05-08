#include "main.h"
#include <stddef.h>
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: filename.
 * @text_content: text added to content.
 * Return: 1 if the file exists, otherwise -1 (Error)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fl, nlet, rwrt;

	if (filename == NULL)
		return (-1);

	fl = open(filename, O_WRONLY | O_APPEND);

	if (fl == -1)
		return (-1);

	if (text_content)
	{
		for (nlet = 0; text_content[nlet]; nlet++)
			;

		rwrt = write(fl, text_content, nlet);

		if (rwrt == -1)
			return (-1);
	}
	close(fl);
	return (1);
}
