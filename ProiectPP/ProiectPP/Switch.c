#include "student.h"
int Switch(struct student *student1, struct student *student2)
{
	struct student temp = *student1;
	*student1 = *student2;
	*student2 = temp;
}