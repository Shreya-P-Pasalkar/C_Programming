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
//  Description :   It is used to do addition of Digits
//  Input :         Integer
//  Output :        Void
//  Author :        Shreya Pramod Pasalkar
//  Date :          15/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

void DigitsSum(int Arr[] , int iLength)
{
    int iCnt = 0, iSum = 0, iTemp = 0;
    int iDigit = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iTemp = Arr[iCnt];
        iSum = 0;

        while(Arr[iCnt] != 0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + iDigit;
            Arr[iCnt] = iTemp / 10;
        }
        printf("%d\t", iSum);
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0, iSize = 0;
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
        printf("Enter element %d:",iCnt + 1);
        scanf("%d", &iPtr[iCnt]);
    }

    DigitsSum(iPtr , iSize);

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