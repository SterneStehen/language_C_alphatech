#include <stdio.h>

int funkMaximun()
{
    int n1, n2, n3;
    printf("Enter 3 numbers: \n");
    scanf("%d%d%d", &n1, &n2, &n3);

    if(n1>n2)
        if(n1>n3)
            return(n1);
        else
            return(n3);
    else if (n2>n3)
            return(n2);
    else return (n3);

}

int main()
{

    printf("maximum is %d", funkMaximun());
}
