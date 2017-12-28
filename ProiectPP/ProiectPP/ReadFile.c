#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

int ReadFile(char *filename)
{
	FILE *infile = NULL;
	if ((infile = fopen(filename, "r")) == NULL) {
		printf("Could not open input file\n");
		return 1;
	}
	int studentNo = 0;
	char line[1024];
	while ((fgets(line, sizeof(line), infile))) {
		stdn[studentNo].name = strtok(line, ",\n");
		stdn[studentNo].surname = strtok(NULL, ",");
		stdn[studentNo].age = strtok(NULL, ",\n");
		stdn[studentNo].city = strtok(NULL, ",\n");
		stdn[studentNo].county = strtok(NULL, ",\n");
		stdn[studentNo].married = strtok(NULL, ",\n");
		studentNo++;
	}
	
	return 0;
}