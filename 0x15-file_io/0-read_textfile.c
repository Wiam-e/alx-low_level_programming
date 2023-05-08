#include "main.h"
#include <stddef.h>
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl;
	char *bffr;
	ssize_t nread, nwrt;

	if (filename == NULL)
		return (0);

	fl = open(filename, O_RDONLY);

	if (fl == -1)
		return (0);

	bffr = malloc(sizeof(char) * (letters));
	if (!bffr)
		return (0);

	nread = read(fl, bffr, letters);
	nwrt = write(STDOUT_FILENO, bffr, nread);

	close(fl);

	free(bffr);

	return (bffr);
}
