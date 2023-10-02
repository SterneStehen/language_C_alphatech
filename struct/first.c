#include <stdio.h>

struct point
{
    int x;
    int y;
};


int main()
{
   struct point p1;
   printf("Enter number x: ");
   scanf("%d", &p1.x);  
   printf("Enter number y: ");
   scanf("%d", &p1.y);  

   printf("Result is :(%d, %d)", p1.x, p1.y);
   return 0;
}
