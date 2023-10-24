#include <stdio.h>

int main()
{
	int arr[6] = {-3,5,0,-8,1,10};
	int tmp = arr[0];
	
	for (size_t i = 0; i < 6; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	size_t i;
	size_t j;
	for ( i= 1; i < 6; i++)
	{
		//tmp = arr[i];
		for (j = 0; j < 6; j++)
		{
			if(arr[i] < arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
				
			}
			
		}
	}
	for (size_t i = 0; i < 6; i++)
	{
		printf("%d ", arr[i]);
	}
	
	int arr2[8] = {-3,5,1,0,-8,1,10,1};
	int count = 8;
	int t;
	for (size_t i = 0; i < count; i++)
	{
		for (size_t j = 1; j < count; j++)
		{
			if(j<=i) 
			{
				j++;
				continue;
			}
			if(arr2[i]<arr2[j])
			{
				t = arr2[i];
				arr2[i] = arr2[j];
				arr2[j] = t;
			}
		}	
	}
	
	printf("\n_______________\n");
	for (size_t i = 0; i < count; i++)
	{
		printf("%d ", arr2[i]);
	}
}