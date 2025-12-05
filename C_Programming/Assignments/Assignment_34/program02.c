#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        ch = ch - 32;
        printf("%c\n" , ch);
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch + 32;
        printf("%c\n" , ch);
    }
    else
    {
        printf("%c\n" , ch);
    }
}

int main()
{
    char iValue = '\0';

    printf("Enter Character :\n");
    scanf("%c" ,&iValue);

    Display(iValue);

    return 0;
}