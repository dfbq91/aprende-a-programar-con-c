
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define SIZE 256

/**
 * Open and close a file using open and print its content
 * @return 0 in success
 * */

int main() {
	int fd;
	char *buff;
	ssize_t ntoprint;

	/* Open file and return fd with flag RDONLY */
	fd = open("./file-to-read.txt", O_RDONLY);
	if (fd == -1) {
		exit(EXIT_FAILURE);
	}

	/* Allocate in dynamic memory the number of bytes for the file */
	buff = malloc(SIZE);
	if (buff == NULL)
		exit(EXIT_FAILURE);

	/* Read number of bytes for fd y assign it to ntoprint */
	ntoprint = read(fd, buff, SIZE);
	if (ntoprint == -1)
	{
		free(buff);
		close(fd);
		return (EXIT_FAILURE);
	}

	/* Print file content */
	printf("%s\n", buff);

	free(buff);
	close(fd);
	return (EXIT_SUCCESS);
}