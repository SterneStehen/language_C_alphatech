#include <stdio.h>

int main()
{
	char arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

	char (*ptr)[3] = arr;
	char x = ptr[1][1];//x = 5;
}