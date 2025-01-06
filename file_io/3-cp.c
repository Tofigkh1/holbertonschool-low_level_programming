#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
/**
 * error_exit - Prints an error
 * @code: exit code
 * @message: error msg
 * @file: file
 * Return: 1 success, -1 fail
 */
void error_exit(int code, const char *message, const char *file)
{
	dprintf(STDERR_FILENO, message, file);
	exit(code);
}
/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_bytes, write_bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to file %s\n", argv[2]);

	while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes != read_bytes)
			error_exit(99, "Error: Can't write to file %s\n", argv[2]);
	}

	if (read_bytes == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	close(fd_from);
	close(fd_to);

	return (0);
}

