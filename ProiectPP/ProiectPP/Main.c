#include "stdio.h"
#include "student.h"

void main()
{
	int studentNo = CountLines("input.csv");
	struct student students[50];
	ReadFile("input.csv", students, studentNo);
	SortNamesAscending(students, studentNo);
	WriteFile("output.csv", students, studentNo);
}