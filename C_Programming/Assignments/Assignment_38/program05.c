#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src + 32;
            dest++;
        }
        else if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src - 32;
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

    StrCpyRev(Arr , Brr);

    printf("%s\n" , Brr);

    return 0;
}