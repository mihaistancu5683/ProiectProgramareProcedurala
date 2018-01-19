#include "stdio.h"
#include "student.h"

void main(int argc, char **argv)
{	
	char *inputFile = "input.csv";
	char *outputFile = "output.csv";
	// Check number of arguments
	if (argc == 2)
	{
		inputFile = argv[1];
	}
	else if (argc == 3)
	{
		inputFile = argv[1];
		outputFile = argv[2];
	}
	else if (argc > 3)
	{
		printf("Invalid number of arguments. \n");
		printf("Use with no argument for default file names (input.csv and output.csv).\n");
		printf("Use with one argument to specify input file name. \n");
		printf("Use with two argument to specify input and output file names. \n");
	}
	// Count the number of lines in input file
	int studentNo = CountLines(inputFile);
	// Allocate memory for the struct
	struct student *students = malloc(studentNo * sizeof(struct student));
	ReadFile(inputFile, students, studentNo);
	SortNamesAscending(students, studentNo);
	WriteFile(outputFile, students, studentNo);
	// Free memory from the stuct
	free(students);
}