#include "student.h"

void SortNamesAscending(struct student * students, int length, char criteria)
{
	int i, j;
	for (i = 0; i < length - 1; i++)
	{
		// Last i elements are already in place   
		for (j = 0; j < length - i - 1; j++)
		{
			struct student *student1 = students + j;
			struct student *student2 = students + j + 1;
			if (criteria == '1')
			{
				// If names are not alphabetically sorted
				if (0 < strcmp(student1->name, student2->name))
				{
					// Switch the students
					Switch(student1, student2);
				}
			}
			else
			{
				// If surnames are not alphabetically sorted
				if (0 < strcmp(student1->surname, student2->surname))
				{
					// Switch the students
					Switch(student1, student2);
				}
			}
		}
	}
}

