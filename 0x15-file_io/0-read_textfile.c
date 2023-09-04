#include "main.h"

/**
* read_textfile - Read text file print to STDOUT.
* @filename: text file being read
* @letters: number of letters to be read
*
* Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wr;
	char *txt;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	txt = malloc(sizeof(char) * letters);


	rd = read(fd, txt, letters);
	wr = write(STDOUT_FILENO, txt, rd);

	free(txt);
	close(fd);
	return (wr);
}
