#include <stdio.h>

#define size 5

void ft_show_pole(const char (*p)[size])
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			printf("%c ", (p[i][j] == 0) ? '#': '0');
		}
		puts("\n");		
	}	
}
void ft_zero_open(const char (*ps)[size], char (*pd)[size], int a, int b)
{
	if(ps[a][b] != 0 || pd[a][b] == 1)
                   return;
	pd[a][b] = 1;
	if(ps[a+1][b]== 0) 
		ft_zero_open(ps, pd, a+1,b);
	if(ps[a][b+1]== 0) 
		ft_zero_open(ps, pd, a,b+1);
	if(ps[a-1][b]== 0) 
		ft_zero_open(ps, pd, a-1,b);
	if(ps[a][b-1]== 0) 
		ft_zero_open(ps, pd, a, b-1);
	
}

int main()
{
	char pole_source[size][size] = {
		{1,1,1,1,1},
		{1,1,0,1,1},
		{0,0,0,0,1},
		{1,1,0,0,0},
		{1,1,0,1,1}
	};
	char pole_dest[size][size] = {0};
	ft_show_pole(pole_dest);
	ft_zero_open(pole_source, pole_dest, 2, 2);
	puts("__________________");
	ft_show_pole(pole_dest);
}