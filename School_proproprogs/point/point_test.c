#include <stdio.h>

int main()
{
	int g;
	int *ptr;
	g = 10;
	ptr = &g;
	int *ptr2;
	ptr2 = ptr;
	printf("test1 *ptr = %d, g = %d, ptr2 = %d\n", *ptr, g, *ptr2);
	if (ptr != NULL)
	{
		*ptr2 = *ptr + 1;
	}
	printf("test2 *ptr = %d, g = %d, ptr2 = %d\n", *ptr, g, *ptr2);
}