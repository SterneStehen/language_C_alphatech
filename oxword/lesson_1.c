#include <stdio.h>

typedef struct list_t
{
	int *n;
	struct list_t *next;
} list_t;

int main()
{
	list_t new;
	new.n = 5;
	new.next = 7;
	list_t new2;
}

