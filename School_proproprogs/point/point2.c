#include <stdio.h>

int main()
{
	int arg = 10;
	int *ptr, *ptr_arg;

	ptr_arg = &arg;
	ptr = ptr_arg;

	printf("ptr_arg = %d arg = %d\n adresse arg = %p\n adresse ptr_arg = %p\n adresse ptr = %p\n", *ptr_arg, *ptr, &arg, ptr_arg, ptr);
	*ptr = 99;
	printf("ptr_arg = %d arg = %d\n adresse arg = %p\n adresse ptr_arg = %p\n adresse ptr = %p\n\n\n", *ptr_arg, *ptr, &arg, ptr_arg, ptr);


	int a;
	int *p_a;
	char *p;
	void *p1;

	a = 777;
	p_a = &a;
	p = (char *)p_a;
	*p = 1;// изменил первый байт цифры 777 на 1(из за char типа). теперь результат 769)
	printf("a = %d, p_a = %d, p = %d", a, *p_a, *p);


}