#include "libft.h"


double ft_perimetr(double w, double h)
{
	if (w <= 0 || h <= 0)
		return 0;
	return (2*(w+h));
}

int ft_abs(double x)
{
	return (x<0) ?-1 : 1;
}

int ft_sq(double x)
{
	return (int)x*x;
}