#include "main.h"

/**
 * open_source_file - opens the source file
 * @filename: the name of the file to open
 *
 * Return: the file descriptor of the opened file
 */

int open_source_file(const char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * create_dest_file - creates the destination file
 * @filename: the name of the file to be created
 *
 * Return: the file descriptor of the created file
 */

int create_dest_file(const char *filename)
{
	int fd;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				filename);
		exit(99);
	}
	return (fd);
}

/**
 * main - Entry point of thr program
 *
 * @argc: Number of arguments
 * @argv: Command-line arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int fd1, fd2;
	ssize_t bytesread, byteswritten;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open_source_file(argv[1]);
	fd2 = create_dest_file(argv[2]);

	while ((bytesread = read(fd1, buffer, 1024)) > 0)
	{
		byteswritten = write(fd2, buffer, bytesread);
		if (byteswritten != bytesread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd1);
			close(fd2);
			exit(99);
		}
	}
	if (bytesread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
