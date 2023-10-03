#include <stdio.h>

typedef struct rational_digit
{
    int numerator;
    int denominator;
}rat;


rat ft_incremenat(rat n1)
{
    int res_numinator;
    res_numinator = n1.numerator + n1.denominator;
    rat result = {res_numinator, n1.denominator};
    return result;
}

void ft_incremenat_point( rat * n1)
{
    (*n1).numerator = (*n1).numerator + (*n1).denominator;
}

void ft_decrement_point(rat * n1)
{
    (*n1).numerator = (*n1).numerator - (*n1).denominator;
}

rat ft_subtraction(rat n1, rat n2)
{

    rat result;

    result.denominator = n1.denominator * n2.denominator;
    result.numerator = n1.numerator * n2.denominator - n2.numerator * n1.denominator;
    return result;
    
}

rat ft_add(rat n1, rat n2)
{
    rat result;
    int i;

    result.denominator = n1.denominator * n2.denominator;
    result.numerator = n1.numerator * n2.denominator + n2.numerator * n1.denominator;
    for(i = 2; i<result.numerator; i++)
        if(result.numerator % i == 0 && result.denominator % i == 0)
        {
            result.denominator = result.denominator/i;
            result.numerator = result.numerator/i;
        }
    return result;
}

rat ft_multiplication(rat n1, rat n2)
{
    rat result;
    int i;
    result.numerator = n1.numerator * n2.numerator;
    result.denominator = n1.denominator * n2.denominator;
    for(i = 2; i<result.numerator; i++)
        if(result.numerator % i == 0 && result.denominator % i == 0)
        {
            result.denominator = result.denominator/i;
            result.numerator = result.numerator/i;
        }
    return result;
}

rat ft_division(rat n1,rat n2)
{
    rat result;
    result.numerator = n1.numerator * n2.denominator;
    result.denominator = n1.denominator * n2.numerator;
    return result;
}

int ft_smaller(rat n1, rat n2)
{
    n1.numerator = n1.numerator * n2.denominator;
    n2.numerator = n2.numerator * n1.denominator;
    if(n1.numerator < n2.numerator)
    {
        return 1;
    }
    else if (n1.numerator == n2.numerator)
    {
        return 0;
    }
    else
        return -1;
}

int main()
{
    rat num1 = {7,4};
    rat num2 = {2,5};
    rat num3 = {7,3};
    
    rat res;
    int r;

   
    // res = ft_incremenat(num2);
    // printf ("result work func incremenat = %d/%d\n", res.numerator, res.denominator);

    // printf ("Befor: digit n1(%d/%d)\n", num1.numerator, num1.denominator);
    // ft_incremenat_point(&num1);
    // printf ("After: digit n1(%d/%d)", num1.numerator, num1.denominator);  

    // printf ("Befor: digit n1(%d/%d)\n", num1.numerator, num1.denominator);
    // ft_decrement_point(&num1);
    // printf ("After: digit n1(%d/%d)", num1.numerator, num1.denominator);  

    // res = ft_add(num1, num2);
    // printf("result add num1(%d/%d) + num2(%d/%d) = %d/%d\n", num1.numerator, num1.denominator, num2.numerator, num2.denominator, res.numerator, res.denominator);

    // res = ft_subtraction(num1, num2);
    // printf("result add num1(%d/%d) + num2(%d/%d) = %d/%d\n", num1.numerator, num1.denominator, num2.numerator, num2.denominator, res.numerator, res.denominator);

    // res = ft_multiplication(num1, num2);
    // printf("result multiplication num1(%d/%d) * num2(%d/%d) = %d/%d\n", num1.numerator, num1.denominator, num2.numerator, num2.denominator, res.numerator, res.denominator);

    // res = ft_division(num1, num2);
    // printf("result division num1(%d/%d) / num2(%d/%d) = %d/%d\n", num1.numerator, num1.denominator, num2.numerator, num2.denominator, res.numerator, res.denominator);
   
    // r = ft_smaller(num1, num2);
    // if (r == 1)
    // {
    //     printf("%d/%d is smaller then %d/%d", num1.numerator, num1.denominator, num2.numerator, num2.denominator);
    // }
    // if (r == 0)
    // {
    //     printf("%d/%d is equal %d/%d", num1.numerator, num1.denominator, num2.numerator, num2.denominator);
    // }
    // if (r == -1)
    // {
    //     printf("%d/%d is graeter then %d/%d", num1.numerator, num1.denominator, num2.numerator, num2.denominator);
    // }   
}