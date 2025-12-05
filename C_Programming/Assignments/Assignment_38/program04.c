#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src + 32;
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

    StrCpySmall(Arr , Brr);

    printf("%s\n" , Brr);

    return 0;
}