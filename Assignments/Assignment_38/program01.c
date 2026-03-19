#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
    while(*src != '\0')
    {
        src++;
    }
    src--;

    while(dest < src)
    {
        *dest = *src;
        src--;
        dest++;
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