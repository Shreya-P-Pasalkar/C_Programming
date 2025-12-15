#include<stdio.h>
#include<stdlib.h>

int Mult(int iNo)
{
    static int iProd;

    if(iNo < 10)
    {
        iProd = iProd * iNo;
        Mult(iNo - 1);
    }
    return iProd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:\n");
    scanf("%d" , &iValue);

    iRet = Mult(iValue);

    printf("%d\n" , iRet);

    return 0;
}