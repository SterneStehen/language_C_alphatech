#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char *ar;
	ar = malloc(5 * sizeof(char));
	for (size_t i = 0; i < 5; i++)
	{
		if (ar[i] != 0)
		{
			printf("Error");
		}
	}
	printf("Memory success");
	free(ar);
	return 1;	
}