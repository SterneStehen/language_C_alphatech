#include <stdio.h>
#include <string.h>

union start_union
{
	char firstName[20];
	int age;
};

// union min_max
// {
// 	int min;
// 	int max;
// 	double average;
// };

int main()
{
	union start_union my_union;
	
		my_union.age = 30;
		printf("age = %d\n", my_union.age);
		strcpy(my_union.firstName, "sergii");
		printf("first name= %s", my_union.firstName);
	
}