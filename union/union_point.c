#include <stdio.h>

typedef union std
{
	int ID;
	double average;
}std;

union student 
{
	int ID;
	double average;
};
int main()
{
	union student morarenko;
	morarenko.ID = 5;
	printf("id befor = %d\n", morarenko.ID);
	union student *ptr;
	ptr = &morarenko;
	ptr->ID = 10;
	printf("id after = %d\n", morarenko.ID);
	int i;

	std array_student[3];
	for(i = 0; i < 3; i++)
	{
		printf("add number id ");
		scanf("%d", &array_student[i].ID);
	}

	for(i = 0; i < 3; i++)
		printf("number  %d\n", array_student[i].ID);
		
}