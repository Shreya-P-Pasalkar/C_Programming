#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src - 32;
            dest++;
        }
        else
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter string: \n");
    scanf("%[^'\n']s" , Arr);

    StrCpyCap(Arr , Brr);

    printf("%s\n" , Brr);

    return 0;
}