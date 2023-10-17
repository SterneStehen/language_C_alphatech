#include <stdio.h>
 
int main(void) 
{
        char str[] = {'B', 'a', 'l', 'a', 'k', 'i', 'r', 'e', 'v', '\0'};
		char s[] = "Hello World and \"C\" hello";
		char buffer[] = "He" "llo" " World";
		char b[43] = "Hello World";
		char sp[] = "Hel\
llo World";
		const char *str1 = "hello";

		//str1[0] = 'a';
		s[0] = 'a';



         printf("str print: %s\n", str);
		 printf("s print: %s\n", s);
		 printf("buffer print: %s\n", buffer);
		 printf("b print: %s\n", b);
		 printf("sp print: %s\n", sp);
		 printf("str1 print: %s\n", str1);
         return 0;
}