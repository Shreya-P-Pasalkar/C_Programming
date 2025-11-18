
//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>                                     // For Input Output
#include<stdlib.h>                                    // For Memory Allocation

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Minimun
//  Description :   It is used to minimum element in an Array
//  Input :         Integer
//  Output :        Integer
//  Author :        Shreya Pramod Pasalkar
//  Date :          15/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0];
    
    for(iCnt = 0,iMin= Arr[0]; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of the application
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

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

    iRet = Minimum(p, iSize);
    
    printf("Smallest number is: %d",iRet);

    free(p);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Testcases : 
// 
// Input : 5  Input : 5   Input : 2    5   42    6    9              Output : Smallest number is: 2
// Input : 3  Input : 13  Input : 10    15    -11                    Output : Smallest number is: -11
// Input : 6  Input : 11  Input : 11     3    11    4    9    8      Output : Smallest number is: 3
//
//////////////////////////////////////////////////////////////////////////////////////////////////////