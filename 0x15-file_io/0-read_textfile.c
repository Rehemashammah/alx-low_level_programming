#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile- Fuction that reads a text file and prints it to POSIX
 * @filename: Name of file
 * @letters: Number of letters it should read and print
 *
 * Return: Actual number of letters it could read and print
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fil_des;
	ssize_t _rd, _wr;
	char *buffer;

	if (!filename)
		return (0);
	fil_des = open(filename, O_RDONLY);
	if (fil_des == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fil_des);
		return (0);
	}
	_rd = read(fil_des, buffer, letters);
	if (_rd == -1)
	{
		free(buffer);
		close(fil_des);
		return (0);
	}
	_wr = write(STDOUT_FILENO, buffer, _rd);
	free(buffer);
	close(fil_des);
	if (_wr == -1 || (ssize_t)_wr != _rd)
	{
		return (0);
	}
	return (_rd);
}
