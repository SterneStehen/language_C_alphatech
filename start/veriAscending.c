#include <stdio.h>

int main()
{
    int size, i, num, tmp, count;
    tmp = 0;
    count = 0;
    i = 1;
    printf("Enter size: ");
    scanf("%d", &size);

    while(i<=size)
    {
        printf("enter number: ");
        scanf("%d", &num);
        if(num > tmp)
        {
            count = count + 1;
            print("count +1");
        }
        //else
            //printf("number %d is NOT Ascending\n", num);
            //break
        tmp = num;
        i++;
    }
    if (count = size)
        printf("line  is  Ascending\n count = %d", count);
    else
        printf("line  is NOT Ascending\n count = %d", count);
    return 0;
}
