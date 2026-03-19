#include<stdio.h>
#include<stdlib.h>

int Display(int iNo)
{
    static int iSum = 0;

    if(iNo > 0)
    {
        iSum = iSum + (iNo % 10);
        Display(iNo / 10);
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:\n");
    scanf("%d" , &iValue);

    iRet = Display(iValue);

    printf("Sum of digits is : %d\n" , iRet);

    return 0;
}