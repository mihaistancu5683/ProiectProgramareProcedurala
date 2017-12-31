#include "stdio.h"
#include "student.h"

void main()
{
	struct student students[50];
	ReadFile("input.csv", students, 50);
}