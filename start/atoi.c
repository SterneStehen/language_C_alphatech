#include <stdio.h>

int atoiFunc(char n1, char n2, char n3)
{
    int d1, d2, d3, result;
    if (n1<='9' && n1 >= '0')
    {
        d1 = n1 - '0';
    }
    else
        return -1;
     if (n2 <= '9' && n2 >= '0')
    {
        d2 = n2 - '0';
    }
    else
        return -1;
     if (n3 <='9' && n3 >= '0')
    {
        d3 = n3 - '0';
    }
    else
        return -1;
    result = d1 * 100 + d2 *10 + d3;
    return result;
}


int main()

{
  char hnum = '1';
  char dnum = '2';
  char snum = '3';
  int res;

  //printf("Enter digit 1: \n");
  //scanf("%s", &hnum);

  //printf("Enter digit 2: \n");
  //scanf("%s", &dnum);

  //printf("Enter digit 3: \n");
  //scanf("%s", &snum);

  //printf("result 1 is %c\n", hnum);
  //printf("result 2 is %c\n", dnum);
  //printf("result 3 is %c\n", snum);
  res = atoiFunc(hnum, dnum, snum);
  printf("result is = %d", res);
}
