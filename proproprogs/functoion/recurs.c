#include <stdio.h>

void ft_call(int a)
{
	printf("down = %d\n", a);
	if (a > 1)
		ft_call(a-1);
	printf("Up = %d\n", a);
}


int main()
{
	int x = 4;
	ft_call(x);
	return 0;
}