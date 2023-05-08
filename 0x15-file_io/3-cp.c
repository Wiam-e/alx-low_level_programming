#include "main.h"
#include <stdio.h>
/**
 * error_file - function that checks if a file can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: nothing.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - function checks the code
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int fl1, fl2, error_f;  /* fl1 is file_from, fl2 is file_to */
	ssize_t nc, nwrt;
	char bffr[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp fl1 fl2");
		exit(97);
	}

	fl1 = open(argv[1], O_RDONLY);
	fl2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(fl1, fl2, argv);

	nc = 1024;
	while (nc == 1024)
	{
		nc = read(fl1, bffr, 1024);
		if (nc == -1)
			error_file(-1, 0, argv);
		nwrt = write(fl2, bffr, nc);
		if (nwrt == -1)
			error_file(0, -1, argv);
	}

	error_f = close(fl1);
	if (error_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl1);
		exit(100);
	}

	error_f = close(fl2);
	if (error_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl1);
		exit(100);
	}
	return (0);
}
