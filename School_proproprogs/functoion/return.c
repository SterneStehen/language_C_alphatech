#include <stdio.h>

int ft_min2(int a, int b)
{
	return ((a<b) ? a : b);
}

int ft_min3(int a, int b, int c)
{
	int min_ab = ft_min2(a,b);
	return (min_ab < c) ? min_ab : c;
}

int main()
{
	int a1 = 4;
	int b1 = 7;
	int c1 = 6;
	printf("minimal digit is %d\n", ft_min3(a1, b1, c1));
	printf("minimal digit is %d\n", ft_min2(ft_min2(a1, b1), c1));
	printf("minimal digit is %d\n", ft_min2(a1, ft_min2(b1, c1)));
	printf("minimal digit is %d\n", ft_min2(ft_min2(a1, 8), ft_min2(b1, c1)));
	printf("minimal digit is %d\n", ft_min3(++a1, b1, c1));


}