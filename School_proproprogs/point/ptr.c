#include <stdio.h>

int main()
{
	int x = 10;
	int *ptr = &x;
	char str[] = "heeello";
	char *ptr1 = str;
	printf("test1 x = %d\n", x);
	printf("test2 ptr = %d\n", *ptr);
	printf("test3 str = %s\n", str);
	printf("test4 ptr1 = %s\n", ptr1);
}