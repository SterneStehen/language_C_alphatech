#include <stdio.h>

int main()
{
    int day, month, year;
    int dNext, mNext, yNext;

    printf("Enter data dd:mm:yyyy\n");
    scanf("%d%d%d", &day, &month, &year);


    dNext = day + 1;
    mNext = month;
    yNext = year;

    if (day > 31 || month > 12)
    {
        printf("Enter correct data");
        break;
    }
    else if((month == 2) &&((year - 2000)%4==0) && (day == 28))
        dNext = 29;
    else if((month == 2) &&((year - 2000)%4!=0) && (day == 28))
    {
        dNext = 1;
        mNext = 3;
    }
    else   if ((day == 28) && (month == 2))
    {
        dNext = 1;
        mNext = month + 1;
    }
    else if (day == 31 && month == 12)
    {
        dNext = 1;
        mNext = 1;
        yNext = year + 1;
    }
      else if ((day == 31) && (month == 1 || month == 3 || month == 5 ||month == 7 ||month == 8 ||month == 10 ))
    {
        dNext = 1;
        mNext = month + 1;
    }
    else if ((day == 30) && (month == 4 || month == 6 || month == 8 ||month == 9 || month == 11))
    {
        dNext = 1;
        mNext = month + 1;
    }


    printf("Next day is %d : %d : %d ", dNext, mNext, yNext);

}
