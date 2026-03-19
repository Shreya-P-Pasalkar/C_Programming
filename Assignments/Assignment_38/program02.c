#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src != ' ')
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

    StrCpyRev(Arr , Brr);

    printf("%s\n" , Brr);

    return 0;
}