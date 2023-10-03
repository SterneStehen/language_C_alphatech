#include <stdio.h>

char toLowerCase(char letter)
{
    printf("test %c\n", letter);
    if(letter >= 'A' && letter <= 'Z')
    {
        printf("test %c\n", letter);
        return  letter - 'A' + 'a';
    }
    else
        return -1;

}

int main()
{
    char name;
    printf("Enter upper case: ");
    scanf("%c", &name);
    printf("Lower case is %c", toLowerCase(name));
}
