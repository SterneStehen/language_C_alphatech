#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 char *ft_strchr(const char *s, int c)
 {
	while (*s)
	{
		if (*s == (char)c)
		{
			return (char*)s;
		}
		s++;
	}
	if (*s=='\0')
		return (char*)s;
	
	return NULL;
 }
int main()
{
	char str[20] = "SergiiMorarenko";
	char *ptr1 = ft_strchr(str,'g');
	char *ptr2 = strchr(str, 'g');

	for (size_t i = 0; ptr2[i] != '\0'; i++)
	{
		printf("%c", *ptr2++);
	}
	printf("\n");
	for (size_t i = 0; ptr1[i] != '\0'; i++)
	{
		printf("%c", *ptr1++);
	}
	printf("\n");
	printf("first occurence is %d", ptr1 - str);
	
	//puts(ptr2);

}