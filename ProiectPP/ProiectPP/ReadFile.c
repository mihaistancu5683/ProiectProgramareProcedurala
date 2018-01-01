#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

int ReadFile(char *filename, struct student *students, int length)
{
	FILE *infile = NULL;
	if ((infile = fopen(filename, "r")) == NULL) {
		printf("Could not open input file\n");
		return 1;
	}
	int studentNo = 0;
	char line[1024];
	while ((fgets(line, sizeof(line), infile))) {
		if (studentNo >= length)
			break;
		char *pch = strtok(line, " ,.-");
		strcpy(students->name, pch);
		strcpy(students->surname, strtok(NULL, " ,.-"));
		strcpy(students->age, strtok(NULL, " ,.-"));
		strcpy(students->city, strtok(NULL, " ,.-"));
		strcpy(students->county, strtok(NULL, " ,.-"));
		strcpy(students->married, strtok(NULL, " ,.-\n"));
		students++;
	}

	return 0;
}