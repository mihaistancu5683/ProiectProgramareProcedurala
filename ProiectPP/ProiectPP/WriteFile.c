#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

int WriteFile(char *filename, struct student *students[], int length)
{
	FILE *outfile = NULL;
	if ((outfile = fopen(filename, "w")) == NULL) {
		printf("Could not open output file\n");
		return 1;
	}
	int studentNo = 0;
	for (int i = 0; i < length; i++)
	{
		if (0 != strcmp("", (*students[i]).name))
		{
			fprintf(outfile,
				"%s,%s,%s,%s,%s,%s\n",
				(*students[i]).name,
				(*students[i]).surname,
				(*students[i]).age,
				(*students[i]).city,
				(*students[i]).county,
				(*students[i]).married
			);
		}
	}
	fclose(outfile);

	return 0;
}