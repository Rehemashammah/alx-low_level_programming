#include "main.h"
#define BUF_SIZE 1024

/**
 * error_98- Function to check error 98
 *
 * @file_from: value to check
 *
 * @buffer: the buffer
 *
 * @argv: Command-line argument
 *
 * Return: error
 */

void error_98(int file_from, char *buffer, char *argv)
{
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		free(buffer);
		exit(99);
	}
}

/**
 * error_99- check error 99
 *
 * @file_from: value to check
 *
 * @buffer: buffer
 *
 * @argv: argument
 *
 * Return: error
 */

void error_99(int file_from, char *buffer, char *argv)
{
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		free(buffer);
		exit(99);
	}
}

/**
 * error_100- checks error 100
 *
 * @file_from: The value to check
 *
 * @buffer:buffer
 *
 * Return:error
 *
 */

void error_100(int file_from, char *buffer)
{
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_from);
		free(buffer);
		exit(100);
	}
}


/**
 * main- main function
 *
 * @argc: number of arguments
 *
 * @argv: pointer to point to the array of arguments
 *
 * Return: 0 on success
 *
 */

int main(int argc, char **argv)
{
	int file_from, file_to, des1, des2;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	buffer = malloc(sizeof(char) * BUF_SIZE);

	if (buffer == NULL)
		return (0);
	file_from = open(argv[1], O_RDONLY);
	error_98(file_from, buffer, argv[1]);
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(file_to, buffer, argv[2]);
	do {
		des1 = read(file_from, buffer, BUF_SIZE);
		if (des1 == -1)
		{
			error_98(file_from, buffer, argv[1]);
		}
		if (des1 == 0)
		{
			break;
		}
		des2 = write(file_to, buffer, des1);
		if (des2 == -1)
		{
			error_99(file_to, buffer, argv[2]);
		}
	} while (des1 >= BUF_SIZE);
	des1 = close(file_from);
	error_100(des1, buffer);
	des2 = close(file_to);
	error_100(des2, buffer);
	free(buffer);
	return (0);
}
