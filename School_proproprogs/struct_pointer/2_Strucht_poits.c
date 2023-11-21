#include <stdio.h>

typedef struct name
{
	char * vaule;
	struct name *next;
}name;

int main()
{
	name Katya = {.vaule = "Katya"};
	name Tolik = {.vaule = "Tolik"};
	name Alexandr = {.vaule = "Alexandr"};

	name * ptr;

	ptr = &Katya;
	Katya.next = &Tolik;
	Tolik.next = &Alexandr;
	Alexandr.next = NULL;
	while (ptr != NULL)
	{
		printf("Name is %s\n", ptr->vaule);
		ptr = ptr->next;
	}
	return 0;	
}