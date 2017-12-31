#include "student.h"

int SortNamesAscending(struct student students[50], int length)
{
	int studentNo = 0;
	for (int i = 1; i < length; i++)
	{
		struct student student1 = students[i - 1];
		struct student student2 = students[i];
		if (0 < strcmp(student1.name, student2.name))
		{
			Switch(student1, student2);
		}
	}
}
