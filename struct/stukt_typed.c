#include <stdio.h>
#include <stdlib.h>

typedef struct data
{
    int day;
    int month;
    int year;
}data;

void ft_print(data dt)
{
    int dNext;
    int mNext;
    int yNext;
    dNext = dt.day + 1;
    mNext = dt.month;
    yNext = dt.year;

    if (dt.day > 31 || dt.month > 12)
    {
        printf("Enter correct data");
    }
    else if((dt.month == 2) &&((dt.year - 2000)%4==0) && (dt.day == 28))
        dNext = 29;
    else if((dt.month == 2) &&((dt.year - 2000)%4!=0) && (dt.day == 28))
    {
        dNext = 1;
        mNext = 3;
    }
    else   if ((dt.day == 28) && (dt.month == 2))
    {
        dNext = 1;
        mNext = dt.month + 1;
    }
    else if (dt.day == 31 && dt.month == 12)
    {
        dNext = 1;
        mNext = 1;
        yNext = dt.year + 1;
    }
      else if ((dt.day == 31) && (dt.month == 1 || dt.month == 3 || dt.month == 5 ||dt.month == 7 ||dt.month == 8 ||dt.month == 10 ))
    {
        dNext = 1;
        mNext = dt.month + 1;
    }
    else if ((dt.day == 30) && (dt.month == 4 || dt.month == 6 || dt.month == 8 ||dt.month == 9 || dt.month == 11))
    {
        dNext = 1;
        mNext = dt.month + 1;
    }

    printf("day = %d, month = %d, year = %d", dNext, mNext, yNext);
}

data ft_inputData()
{
    data dt;
    printf("Enter day: ");
    scanf("%d", &dt.day);
    printf("Enter month: ");
    scanf("%d", &dt.month);
    printf("Enter year: ");
    scanf("%d", &dt.year);
    return dt;
}

int main()
{
    struct data today;    
    today = ft_inputData();
    ft_print(today);
}