#include <stdio.h>
#include "libft.h"// call gcc .\funtion_to_ft.c .\main_func.c 


int main()
{
	double a = 3.2;

	double b = 4.2;
	double result = ft_perimetr(a, b);
	printf("rerimetr is %.2f metr/kv\n", result);
	printf("function abs i = %d\n", ft_abs(a));
	printf("function sq i = %d", ft_sq(b));


}

