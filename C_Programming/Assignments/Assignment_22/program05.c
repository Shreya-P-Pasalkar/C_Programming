/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>                                     // For Input Output
#include<stdlib.h>                                    // For Memory Allocation
#include<stdbool.h>                                   // For Boolean Datatype

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Frequency
//  Description :   It is used to find the frequency of number taken from user
//  Input :         Integer
//  Output :        Integer
//  Author :        Shreya Pramod Pasalkar
//  Date :          14/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////
int Frequency(int Arr[], int iLength , int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]) == iNo)
        {
            iFrequency++;
        }
    }

    return iFrequency;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iRet =0, iValue;
    int *p = NULL;

    printf("Enter Number of elements:");
    scanf("%d",&iSize);
    printf("Enter Number whose frequency is to be found:");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));
    
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d:",iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize, iValue);

    printf("Frequency of %d is %d",iValue,iRet);
    
    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
// Testcases : 
// 
// Input : 5  Input : 5   Input : 2    5   42    6    9             Output : Frequency of 5 is 1
// Input : 3  Input : 13  Input : 10    15    11                    Output : Frequency of 13 is 0
// Input : 6  Input : 11  Input : 11     3    11    4    9    8     Output : Frequency of 11 is 2
//
/////////////////////////////////////////////////////////////////////////////////////////////////