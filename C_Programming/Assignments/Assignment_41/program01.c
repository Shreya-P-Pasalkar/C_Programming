#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    if(iNo > 0)
    {
        printf("%d\t*\t" , iNo);
        Display(iNo - 1);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d" , &iValue);

    Display(iValue);

    return 0;
}