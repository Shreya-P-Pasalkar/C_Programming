#include<stdio.h>
#include<stdbool.h>

void Display(char ch)
{
    printf("Decimal : %d\n" , ch);
    printf("Octal : %o\n" , ch);
    printf("Hexadecimal : %x\n" , ch);
}

int main()
{
    char iValue = '\0';

    printf("Enter Character :\n");
    scanf("%c" , &iValue);

    Display(iValue);

    return 0;
}