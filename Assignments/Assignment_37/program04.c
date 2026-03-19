#include<stdio.h>

int LastChar(char *str , char ch)
{
    int iCnt = 0 , iIndex = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iIndex = iCnt;
        }
        str++;
        iCnt++;
    }

    if(iIndex >= 0)
    {
        return iIndex;
    }
    else
    {
        return -1;
    }
}

int main()
{
    char Arr[50] = {'\0'};
    char cValue;
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s" , Arr);

    printf("Enter character : \n");
    scanf(" %c" , &cValue);

    iRet = LastChar(Arr , cValue);

    printf("Character location is %d" , iRet);

    return 0;
    
}