#include<stdio.h>
#include<stdlib.h>

void Display()
{
    static int iCnt = 5;

    if(iCnt > 0)
    {
        printf("%d\t" , iCnt);
        iCnt--;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}