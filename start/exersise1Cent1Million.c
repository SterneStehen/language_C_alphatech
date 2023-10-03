#include <stdio.h>

int main()
{
    long int cent, i;

    cent = 1;
    for (i = 1; i <= 30; i++)
    {
        cent = cent+cent;
        printf("After %d day you will have %d dollars\n", i, cent/100);
    }

    return 0;
}
