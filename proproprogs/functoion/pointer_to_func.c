#include <stdio.h>

int ft_sq(int w, int h)
{
	return(w*h);
}

int main()
{
	int a = 4, b = 5, res;
	int (*ptr_func) (int, int);
	ptr_func = ft_sq;
	res = ptr_func(a,b);
	printf("%d", res);
}