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
//  Description :   It is used to display even elements which are divisible by 5
//  Input :         Integer
//  Output :        Void
//  Author :        Shreya Pramod Pasalkar
//  Date :          16/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////


void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    printf("Elements divisible by 5 and are even:");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(((Arr[iCnt] % 5) == 0) && ((Arr[iCnt] % 2) == 0) )
        {
            printf("%d\t",Arr[iCnt]);
        }
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
       printf("Enter element %d", iCnt);
       scanf("%d",&iPtr[iCnt]); 
    }

    Display(iPtr, iSize);

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