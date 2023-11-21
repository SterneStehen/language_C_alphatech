#include <stdio.h>

int main()
{
	int i;
	int *ptr; 

	i = 8;
	ptr = &i;
	printf("number memory ptr = %u\n", ptr);// 4150262660
	ptr++; // int +4; char +1; double +8;
	printf("number memory ptr = %u\n", ptr);//4150262664
	ptr += 10;
	ptr--;
	--ptr;
	printf("number memory ptr = %u\n\n\n", ptr);//4150262696

	int d = 476789;
	char *p1 = (char *)&d;

	for (size_t i = 0; i < sizeof(d); i++)
	{
		printf("bite p1[%d] = %d\n", i, *p1++); //bite p1[0] = 117; bite p1[1] = 70; bite p1[2] = 7; bite p1[3] = 0
		//p1++;
	}
	printf("\n\n");

	int g = 476789;
	int *p2 = &g;

	*p2 = *p2 + 1;

	printf("g = %d, *p2 = %d\n", g, *p2);//g = 476790, *p2 = 476790

	printf("\n");
	int f = 476789;
	char *p3 = (char*)&f;

	int x = *p3 + 1;

	printf("x = %d, *p3 = %d\n", x, *p3);//x = 118, *p3 = 117

	int y = *(p3 + 1);

	printf("y = %d, *p3 = %d\n", y, *p3);//y = 70, *p3 = 117

}