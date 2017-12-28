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
	struct student stdn[50];
	int studentNo = 0;
	char line[1024];
	while ((fgets(line, sizeof(line), infile))) {
		char *pch = strtok(line, " ,.-");
		stdn[studentNo].name = strtok(NULL, " ,.-");
		stdn[studentNo].surname = strtok(NULL, " ,.-");
		stdn[studentNo].age = strtok(NULL, " ,.-");
		stdn[studentNo].city = strtok(NULL, " ,.-");
		stdn[studentNo].county = strtok(NULL, " ,.-");
		stdn[studentNo].married = strtok(NULL, " ,.-\n");
		//studentNo++;
	}
	
	return 0;
}