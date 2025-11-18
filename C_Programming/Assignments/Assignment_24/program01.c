
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>                                     // For Input Output
#include<stdlib.h>                                    // For Memory Allocation

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Frequency
//  Description :   It is used to find the Maximum element in an array
//  Input :         Integer
//  Output :        Integer
//  Author :        Shreya Pramod Pasalkar
//  Date :          15/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax = 0;

    for(iCnt = 0, iMax = Arr[0]; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of the application
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter Number of elements:");
    scanf("%d",&iSize);

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

    iRet = Maximum(p, iSize);
    
    printf("Maximum among all numbers is: %d",iRet);

    free(p);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Testcases : 
// 
// Input : 5  Input : 5   Input : 2    5   42    6    9             Output : Maximum among all numbers is: 42
// Input : 3  Input : 13  Input : 10    15    11                    Output : Maximum among all numbers is: 15
// Input : 6  Input : 11  Input : 11     3    11    4    9    8     Output : Maximum among all numbers is: 11
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////