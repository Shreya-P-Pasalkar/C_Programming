/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>                                     // For Input Output
#include<stdlib.h>                                    // For Memory Allocation

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Digits
//  Description :   It is used to display elements with 3 digits
//  Input :         Integer
//  Output :        Void
//  Author :        Shreya Pramod Pasalkar
//  Date :          15/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] > 100) && (Arr[iCnt] <= 999))
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

int main()
{
    int iCnt = 0,iSize = 0;
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

    Digits(iPtr, iSize);

    free(iPtr);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
// Testcases : 
// 
// Input : 5  Input : 5   Input : 2    5   426    6    9           Output : 426
// Input : 3  Input : 13  Input : 10    15    111                  Output : 111
// Input : 6  Input : 11  Input : 11     653    -121    9    8     Output : 653    -121
//
/////////////////////////////////////////////////////////////////////////////////////////////////