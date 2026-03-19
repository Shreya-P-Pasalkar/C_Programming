#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        while(ch >= 'a')
        {
            printf("%c" , ch);
            ch--;
        }
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        while(ch <= 'Z')
        {
            printf("%c" , ch);
            ch++;
        }
    }
}

int main()
{
    char iValue = '\0';

    printf("Enter Character :\n");
    scanf("%c" , &iValue);

    Display(iValue);

    return 0;
}