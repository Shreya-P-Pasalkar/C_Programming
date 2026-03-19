/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>                                     // For Input Output
#include<stdlib.h>                                    // For Memory Allocation

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DigitsSum
//  Description :   It is used to find difference between even and odd elements
//  Input :         Integer
//  Output :        Integer
//  Author :        Shreya Pramod Pasalkar
//  Date :          16/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvenSum = 0, iOddSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }

    return(iEvenSum - iOddSum);
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iCnt = 0, iSize = 0, iRet = 0;
    int *iPtr = NULL;

    printf("Enter number of elements:");
    scanf("%d",&iSize);

    iPtr = (int *)malloc(iSize * sizeof(int));

    if(iPtr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       printf("Enter element %d : " , iCnt-1);
       scanf("%d",&iPtr[iCnt]); 
    }

    iRet = Difference(iPtr , iSize);

    printf("Difference between even and odd numbers : %d", iRet);

    free(iPtr);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
// Testcases : 
// 
// Input : 5    Input : 2    5   42    6    9              Output : 2    5     6    6    9
// Input : 3    Input : 10    15    11                     Output : 1    6    2
// Input : 6    Input : 11     3    -11    4    9    8     Output : 2    3    0    4    9    8
//
/////////////////////////////////////////////////////////////////////////////////////////////////