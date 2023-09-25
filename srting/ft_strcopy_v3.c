#include <stdio.h>

char *ft_strcpy(char *destination, char *sourse)
{
	char *ft_result;
	ft_result = destination;
	int i = 0;
	while (sourse[i])
	{
		destination[i] = sourse[i];
		i++;
	}
	destination[i] = '\0';	
	return ft_result;
}

int main()
{
	char myName[] = "Sergii";
	char copyName[20];
	char *result;
	result = ft_strcpy(copyName, myName);
	printf("%s", result);
}