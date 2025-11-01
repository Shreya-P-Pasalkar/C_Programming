#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0, iFrequency = 0;

    if(iNo < 0)     //Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency++;
            break;               // Optimization
        }
    }
    
    if(iFrequency == 0)          // No factors
    {
        return true;
    }
    else                        // Atleast one factor
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is prime number \n",iValue);
    }
    else
    {
        printf("%d is not prime number \n",iValue);
    }

    return 0;
}

/*
    Time Complexity : For Prime - N/2
    Time Complexity : For non Prime - either 1 or 2
*/