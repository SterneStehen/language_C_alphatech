#include <stdio.h>

struct name
{
	char *vaule;
	struct name *next;
}name;

int main()
{
	struct name Katya = {Katya.vaule = "Katya"};
	struct name Timur = {Timur.vaule = "Timur"};
	struct name Sergii = {Sergii.vaule = "Sergii"};
	
	struct name *ptr;
	
	ptr = &Katya;
	Katya.next = &Timur;
	Timur.next = &Sergii;
	Sergii.next = NULL;

	while (ptr != NULL)
	{
		printf("%s\n", ptr->vaule);
		ptr = ptr->next;
	}
}
