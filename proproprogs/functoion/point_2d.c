#include <stdio.h>

void show_ar(const short (*ar)[3], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d",ar[i][j]);
		}
		printf("\n");
	}
	
}

int main()
{
	short array[][3] = {{1,2,3}, {4,5,6}};
	show_ar(array, sizeof(array)/sizeof(*array));
	printf("\n");
	printf("number short = %d, sizeoff(array) = %d, sizeoff(*array) = %d", sizeof(short), sizeof(array), sizeof(*array));
}