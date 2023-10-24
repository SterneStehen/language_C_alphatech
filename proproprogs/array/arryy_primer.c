#include <stdio.h>
#include <stdlib.h>

char *ft_change(char *str, char s, int ind)
{
	int len = 0;
	while (str[len]) len ++;
	//char *str =  malloc(len+1);
	printf("%d", len);

	str[len--] = '\0';

	while (len>=0)
	{
		if(len == ind)
		{
			str[len] = s;
			len--;
		}
		str[len] = str[len];
		len--;		
	}

	puts(str);
	return str;
}

int main()
{
	char array[100] = {'1', '2', '3', '5',  'a', 'b', 'c', 'd', 'f'};
	char dest[30];
	int size1 = sizeof(array)/sizeof(array[0]);
	int size2 = sizeof(dest)/sizeof(dest[0]);
	int size =  (size1<size2) ? size1 : size2;

	printf("%d\n",size);
	for (int i = 0; i < size; i++)
	{
		dest[i] = array[i];
	}
	puts(dest);

	char array2[20] = "1235abcd";
	char *dest2 = ft_change(array2, '4', 3);
	puts(dest2);
}