#include "stdio.h"
#include "student.h"

void main()
{	// Count the number of lines in input file
	int studentNo = CountLines("input.csv");
	// Allocate memory for the struct
	struct student *students = malloc(studentNo * sizeof(struct student));
	ReadFile("input.csv", students, studentNo);
	SortNamesAscending(students, studentNo);
	WriteFile("output.csv", students, studentNo);
	// Free memory from the stuct
	free(students);
}