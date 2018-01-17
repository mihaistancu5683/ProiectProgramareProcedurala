#include <stdio.h>
int CountLines(char *filename)
{                                
	FILE *fp = fopen(filename, "r");
	int lines = 1;
	int ch = 0;

	if (fp == NULL)
		return 0;

	// While the end of file was not reached
	while (!feof(fp))
	{
		ch = fgetc(fp);
		// If new character is found
		if (ch == '\n')
		{
			// Increment the number of lines
			lines++;
		}
	}
	fclose(fp);
	return lines;
}