#include <stdio.h>

int main()
{
    int grade;
    do
    {
        printf("Enter legit grade between 0 to 100:");
        scanf("%d", &grade);
    }while(grade<0 || grade>100);
    printf("It is legal grade Thanks!");
}
