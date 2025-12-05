#include<stdio.h>

int Difference(char *str)
{
    int iCountSmall = 0 , iCountCapital = 0 ;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCapital++;
        }
        str++;
    }
    return (iCountSmall - iCountCapital);
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s" , Arr);

    iRet = Difference(Arr);

    printf("Difference between Small and Captial Characters : %d" , iRet);

    return 0;
}