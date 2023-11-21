#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a; //5
	*a = *b;  //10
	*b = tmp; //5
}

int ft_sum_ar(const short *ar, size_t count)
{
	int result = 0;
	while (count-->0)
		result += *ar++;
		//count--;
	
	// for (size_t i = 0; i < count; i++)
	// {
	// 	result += ar[i]; 
	// }
	return result;
}

const char * ft_fine_space(const char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 32)
		{
			return (char*)&str[i];
		}
		i++;
	}
	return (char*)&str[i];
}

const char* ft_fine_space2(const char *str)
{
	while (*str)
	{
		if(*str == 32)
			return str;
		*str++;
	}
	return str;
}

int main()
{
	int x = 5, y = 10;
	short ar[5] = {1,3,5,7,9};
	char s[15] = "Segii Morarenko";
	const char *t = ft_fine_space2(s);
	printf("befor function swap x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("after function swap x = %d, y = %d\n", x, y);
	printf("sum elemens array = %d\n", ft_sum_ar(ar, sizeof(ar)/sizeof(*ar)));
	printf("%ld\n", t - s);
	for (size_t i = 0; i < 7; i++)
	{
		printf("%c", *t++);
	}
	
	
}