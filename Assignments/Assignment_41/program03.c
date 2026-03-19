#include<stdio.h>
#include<stdlib.h>

int Strlen(char *str)
{
    static int iSum;

    if(*str != '/0')
    {
        iSum++;
        str++;
        Strlen(str);
    }
    return iSum;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter String:\n");
    scanf("%s" , arr);

    iRet = Strlen(arr);

    printf("%d\n" , iRet);

    return 0;
}