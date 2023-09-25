#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	int result = 0;

	while (result == 0 )
	{
		if (s1[i] < s2[i] || s1[i] == '\0')
		{
			return  -1;
		}
		if (s1[i] > s2[i] || s2[i] == '\0')
		{
			return  1;
		}
		i++;
		if ((s1[i] == '\0') && (s2[i] == '\0') )
			return 0;
	}
	return result;
}

int main()
{
	char str1[10] = "morerenj";
	char str2[10] = "mororenj";
	printf("myFunc= %d\n", ft_strcmp(str1, str2));
	printf("original= %d", strcmp(str1, str2));
}
