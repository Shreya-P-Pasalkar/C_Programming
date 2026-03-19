/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>                                     // For Input Output
#include<stdlib.h>                                    // For Memory Allocation

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Description :   It is used to find the Difference between Maximum and Minimum
//  Input :         Integer
//  Output :        Integer
//  Author :        Shreya Pramod Pasalkar
//  Date :          15/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
    int iCnt = 0 , iMax = 0 , iMin = 0;
    
    for(iCnt = 0,iMax = Arr[0],iMin = Arr[0]; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < Arr[iMax] )
        {
            iMax = Arr[iCnt];
        }
        else
        {
            iMin = Arr[iCnt];
        }
    }

    return (iMax - iMin);
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0,iSize = 0, iRet = 0;
    int *iPtr = NULL;

    printf("Enter number of elements:");
    scanf("%d", &iSize);

    iPtr = (int *)malloc(iSize * sizeof(int));
    if(iPtr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d:",iCnt + 1);
        scanf("%d", &iPtr[iCnt]);
    }

    iRet = Difference(iPtr , iSize);
    printf("Difference between maximum and minimum number is: %d",iRet);

    free(iPtr);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
// Testcases : 
// 
// Input : 5  Input : 5   Input : 2    5   42    6    9         Output : 40
// Input : 3  Input : 13  Input : 10    15    11                Output : 5
// Input : 5  Input : 11  Input : 11     3    11    -4    9     Output : 14
//
/////////////////////////////////////////////////////////////////////////////////////////////////