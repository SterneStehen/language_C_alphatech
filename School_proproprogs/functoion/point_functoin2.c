#include <stdio.h>
#define size 6

//int ft_is_even(int x);

void ft_func(int *arr, size_t len_arr, int *src, size_t len_src,  int (*ft_all)(int))
{
	//int res[size];
	size_t i = 0;
	while (len_arr > 0 && len_src > i)
	{
		if (ft_all(arr[len_arr]))
			src[i++] = arr[len_arr];
		len_arr--;
	}
}

int ft_is_even(int x)
{
	return x%2 == 0;
}
int ft_positiv(int x)
{
	return x >=0;
}

int main()
{
	int arr[] = {-3, 4, 6, 10, -4, 8};
	int resul[size];
	
	ft_func(arr, sizeof(arr)/sizeof(*arr), resul, size, ft_positiv);
	int i = 0;
	for (size_t i = 0; i < size; i++)
		printf("%d\n", resul[i]);
		
	return 0;
}