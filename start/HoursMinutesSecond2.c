#include <stdio.h>

int main()
{
    int h, m, sn, s;
    char hc, mc, sc, result;
    hc = '0';
    mc = '0';
    sc = '0';

    printf("Enter second:");
    scanf("%d", &s);

    h = s / 3600;
    m = (s - (h * 3600)) / 60;
    m = (s % (h * 3600)) / 60;
    sn = s - ((h * 3600) + (m * 60));
    sn = s % 60;

    if (h < 10)
        printf("%d second equal 0", s);
    printf("%d : ", h);
    if (m < 10)
        printf("0");
    printf("%d : ", m);
    if (sn < 10)
        printf("0");
    printf("%d", sn);

}
