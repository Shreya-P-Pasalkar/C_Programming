#include<stdio.h>
#include<stdlib.h>

void Display()
{
    static int iCnt = 0;

    if(iCnt <= 5)
    {
        printf("*\t");
        iCnt++;
        Display();
    }
    printf("\n");
}

int main()
{
    Display();

    return 0;
}