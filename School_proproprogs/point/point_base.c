#include <stdio.h>

int main()
{
	//int f;
	char f;
	char *ptr1; // объявление указателя для работы с данными

	f = 'a';	
	ptr1 = &f;//0000001df01ff6be// взятие адреса переменной f и присваивание его указателю

	char y = *ptr1; // считывание значения
	*ptr1 = 'e'; // запись значения
	printf(" y = %c f = %c\n ", y, f);
	//ptr1 = 0;  ptr1 = &d; ptr1 = 10234; присваеваем адрес ячейки поитреру ptr(берем адрес);
	//*ptr1 = 0; *ptr1 = 'e'; вкадываем значение 0 по адресу ptr(присваевам значение);

	char d;
	char *gpt;

	d = 'a';
	gpt = &d;

	printf("d = %c gpt = %c adresse d = %p adresse *gpt = %p\n", d, *gpt, &d, gpt);

	*gpt = 'b';

	printf("d = %c gpt = %c adresse d = %p adresse *gpt = %p\n", d, *gpt, &d, gpt);

	int i;
	int *ptr;

	i = 10;
	ptr = &i;

	printf("i = %d gpt = %d adresse i = %p adresse *gpt = %p\n", i, *ptr, &i, ptr);

	*ptr = 75444;

	printf("i = %d gpt = %d adresse i = %p adresse *gpt = %p\n", i, *ptr, &i, ptr);
}