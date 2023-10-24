#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char buffer[100];
	int age = 32;
	double weigcht = 83.5;

	sprintf(buffer, "I AM sERGII, my age is %d and my weigcht is %.2f. am happy", age, weigcht);
	printf("%s\n", buffer);

	double width = 2.5;
	double height = 3.3;
	double depht = 5.5;
	const char format[] = "( %.2f test %.2f test %.2f test %.15s:)";
	char str[15] = "SergiiMorarenko";
	size_t size = strlen(str) + 100;
	char *buff = malloc(size);

	sprintf(buff,  format, width, height, depht, str);
	puts(buff);
	free(buff);

	printf("\n\n");//( 2.50 test 3.30 test 5.50 test SergiiMorarenko:)

	int a = -876;
	float b = 34.56;
	char save_char[100];
	sprintf(save_char, "%d,%.2f", a, b);
	printf("%s\n", save_char);//-876,34.56 translate int to char


	printf("next \n\n\n");

	char a1[] = "123";
	char b1[] = "-123123214";
	char c1[] = "476888998";
	char d1[] = "33.45";

	int a2 = atoi(a1);
	long int b2 = atol(b1);
	long long int c2 = atoll(c1);
	double d2 = atof(d1);
	printf("integer %d, long %d, long long %d, %.2f", a2, b2, c2, d2);
} 

