#include "main.h"
#include <stddef.h>
/**
 * create_file - create a file with read/write access for user
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 (Success), otherwise -1 (Fail)
 */
int create_file(const char *filename, char *text_content)
{
	int fl, rstatlet, n;

	if (filename == NULL)
		return (-1);

	fl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fl == -1)
	return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n] != '\0'; n++)
			;
		rstatlet = write(fl, text_content, n);
		if (rstatlet == -1)
		return (-1);
	}

	close(fl);
	return (1);
}
