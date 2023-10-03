#include <stdio.h>

int maxDigit(int n)
{
    int firsNum, secondNum;
    if (n > 99)
    {
        printf("ERROR. Enter 2 digit\n");
        return 0;
    }

    firsNum = n % 10;
    secondNum = n / 10;

    if (firsNum > secondNum)
        return firsNum;
    else
        return secondNum;

}

int main()
{
  int num, maxDig;
  printf("Enter 2-digit number: ");
  scanf("%d", &num);
  maxDig = maxDigit(num);
  if (maxDig != 0)
    printf("max digit is %d", maxDig);
}
