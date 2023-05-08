#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * append_text_to_file - appends text to a file
 * @filename: file to be appended
 * @text_content: text to be appended
 * Return: -1 error 1 success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int result;
	FILE *fp;

	if (filename == NULL)
	{
		return (-1);

	}
	if (text_content == NULL)
	{
		return (1);
	}
	fp = fopen(filename, "a");
	if (fp == NULL)
	{
		return (-1);
	}
	result = fputs(text_content, fp);
	fclose(fp);
	if (result == EOF)
	{
		return (-1);
	}
	return (1);
}
