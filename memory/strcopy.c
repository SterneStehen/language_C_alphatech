#include <stdio.h>
#include <string.h>

int main()
{
	int len, len1;
	const char source[20] = "source string";
	char destination[10];
	
	const char *s = source;
	char *d = destination;

	len = sizeof(destination);
	len1 = 0;

	//puts(destination);
	while (len-- > 1 && *s)
	{
		*d++ = *s++;
	}
	*d = '\0';
	puts(destination);

	char *dst = destination;
	while (*dst++)
		len1++;
	printf("lenght destination = %d\n\n", len1);

	char st1[100] = "Sergii";
	char st2[15] = "Morarenko";
	char st3[100] = "Sergii";
	char st4[13] = "Morarenko ";

	strcat(st1, st2);
	puts(st1);

	size_t len3 = sizeof(st4) - strlen(st4);
	printf("test len3 = %d\n", len3);
	strncat(st4, st3, len3);
	puts(st4);	
}