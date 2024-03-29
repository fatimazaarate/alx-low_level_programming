#include "main.h"
#include <string.h>

/**
* create_file - Creates a file.
* @filename: A pointer to the name of the file to create.
* @text_content: A pointer to a string to write to the file.
*
* Return: If the function fails - -1.
* Otherwise - 1.
*/

int create_file(const char *filename, char *text_content)
{
	int fp;
	int len;

	if (filename == NULL)
		return (-1);


	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = write(fp, text_content, strlen(text_content));
		if (len == -1)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
