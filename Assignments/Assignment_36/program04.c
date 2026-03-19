#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c\t", *str);
        }
        str++;
    }
    printf("\n");
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n']s" , Arr);

    DisplayDigit(Arr);

    return 0;
}