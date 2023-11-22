#include <stdio.h>

#define SIZE  20

int main()
{
	char array[SIZE] = {3,2,3,2,1,2,3,1,3,3,5,6,7,3,4,5,7};
	char count[10] = {0};
	char count2[10] = {0};
	int counter1= 0;
	int counter2 = 0;
	int counter3 = 0;
	int i;
	int a = 1;
	int b = 2;
	int c = 3;

	for(i = 0; i < SIZE; i++)
	{
		if (array[i] == 1)
			counter1 ++;
		if (array[i] == 2)
			counter2++;
		if (array[i] == 3)
			counter3++;
	}
	printf("c1 = %d, c2 = %d, c3 = %d\n", counter1, counter2, counter3);
	
	for(i = 0; i < SIZE; i++)
	{
		if (array[i] == a)
			count[a]++;
		if (array[i] == b)
			count[b]++;
		if (array[i] == c)
			count[c]++;
	}
	//printf("c1 = %d, c2 = %d, c3 = %d\n", counter1, counter2, counter3);
	printf("a1 = %d, a2 = %d, a3 = %d\n", count[1], count[2], count[3]);
	for(i = 0; i < SIZE; i++)
	{
		count2[array[i]]++;
	}
	printf("ac1 = %d, ac2 = %d, ac3 = %d, ac5 = %d\n", count2[1], count2[2], count2[3], count2[5]);
}
