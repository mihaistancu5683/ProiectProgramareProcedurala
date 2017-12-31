#include <stdio.h>
int CountLines(char *filename)
{                                
	FILE *fp = fopen(filename, "r");
	int lines = 1;
	int ch = 0;

	if (fp == NULL)
		return 0;

	while (!feof(fp))
	{
		ch = fgetc(fp);
		if (ch == '\n')
		{
			lines++;
		}
	}
	fclose(fp);
	return lines;
}