/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>                                     // For Input Output
#include<stdlib.h>                                    // For Memory Allocation

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to display multiple of 11
//  Input :         Integer
//  Output :        Void
//  Author :        Shreya Pramod Pasalkar
//  Date :          18/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    printf("Elements multiple of 11:");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 11) == 0 )
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
// Input : 5    Input : 2    5   42    6    9              Output : 
// Input : 3    Input : 10    15    11                     Output : 11
// Input : 6    Input : 33     3    -44    4    9    8     Output : 33     -44
//
/////////////////////////////////////////////////////////////////////////////////////////////////