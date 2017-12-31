#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

int ReadFile(char *filename, struct student students[], int length)
{
	FILE *infile = NULL;
	if ((infile = fopen(filename, "r")) == NULL) {
		printf("Could not open input file\n");
		return 1;
	}
	int studentNo = 0;
	char line[1024];
	while ((fgets(line, sizeof(line), infile))) {
		char *pch = strtok(line, " ,.-");
		strcpy(students[studentNo].name, pch);
		strcpy(students[studentNo].surname, strtok(NULL, " ,.-"));
		strcpy(students[studentNo].age, strtok(NULL, " ,.-"));
		strcpy(students[studentNo].city, strtok(NULL, " ,.-"));
		strcpy(students[studentNo].county, strtok(NULL, " ,.-"));
		strcpy(students[studentNo].married, strtok(NULL, " ,.-\n"));
		studentNo++;
	}

	return 0;
}