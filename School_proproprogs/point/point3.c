#include <stdio.h>

int main()
{
	//int *ptr;
	//*ptr = 1;// exited with code=3221225477

	int arg = 3;
	int *ptr;
	printf("test agr = %d\n", arg);
	ptr = &arg;
	*ptr = 6;
	printf("test agr = %d\n\n", arg);

	int a = 5;
	int *p1 =&a;

	if(p1 != NULL)
		*p1 = 3;
	
	printf("test *p1 = %d", *p1);

}