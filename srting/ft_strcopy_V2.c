#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *destination, char *source)
{
    char *tempPtr;
    tempPtr = destination;
    int i = 0;

    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
    return tempPtr;

}

int main()
{
    char destinationFt[20] = "sergii";
    char sourceFt[10] = "morarenko";
    char destinationMy[20] = "sergii";
    char sourceMy[10] = "morarenko";

    char *resulFt;
    char *tempResult;
    resulFt = strcpy(destinationFt, sourceFt);
    tempResult =  ft_strcpy(destinationMy, sourceMy);
    printf("dest = %s\n sourse = %s\n resul original function is: %s\n", destinationFt, sourceFt, resulFt);
    printf("destMy = %s\n sourseMy = %s\n resul my function is: %s\n", destinationMy, sourceMy, tempResult);
    return 0;
}