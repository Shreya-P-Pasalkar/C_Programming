#include<stdio.h>
#include<stdbool.h>

#define FALSE 0
#define TRUE 1

typedef int BOOL;

BOOL CheckSpecial(char ch)
{
    if((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') || (ch == '^') || (ch == '&') ||( ch == '*'))
    {
        return TRUE;
    } 
    else
    {
        return FALSE;
    }
}

int main()
{
    char iValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character :\n");
    scanf(" %c" , &iValue);

    bRet = CheckSpecial(iValue);

    if (bRet == TRUE)
    {
        printf("It is a special character");
    }
    else
    {
        printf("It is not a special character");
    }

    return 0;
}