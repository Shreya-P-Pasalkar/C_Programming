#include<stdio.h>

void strltogglex(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32; 
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32; 
        } 
        str++;  
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n']s" , Arr);

    strltogglex(Arr);

    printf("Modified String is : %s \n" , Arr);

    return 0;
}