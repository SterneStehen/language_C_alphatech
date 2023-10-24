#include <stdio.h>

int ft_statik_count()
{
	static int stat = 10;
	printf("stat to func = %d\n", stat);
	return stat++;
}

int main()
{
	int t = 10;
	int a = 1, b = 3, i = 0;
	while (i++ < 3)
	{
		int t = a+b;
		printf("t1 = %d\n", t);
	}
	
	printf("t2 = %d\n", t);
	
	
	int var;
	static int var2;
	static double glob[1000000];

	float x=0.3,y=0.4;
	printf("main var = %d, static = %d\n", var, var2);
	printf("%f\n\n", x+y);
	ft_statik_count();
	ft_statik_count();
	ft_statik_count();


}