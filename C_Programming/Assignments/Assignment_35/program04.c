#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char *str)
{
    int iCountVowel = 0;

    while((*str != '\0'))
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            iCountVowel++;
        }
        str++;
    }

    if(iCountVowel > 0)
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
    char Arr[50] = {'\0'};
    BOOL bRet = FALSE;

    printf("Enter string: \n");
    scanf("%[^'\n']s" , Arr);

    bRet = ChkVowel(Arr);

    if(bRet == TRUE)
    {
        printf("Vowel is present in the string\n");
    }
    else
    {
        printf("Vowel is not present");
    }

    return 0;
}