/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>                                     // For Input Output
#include<stdlib.h>                                    // For Memory Allocation

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountEven
//  Description :   It is used to count number of even elements
//  Input :         Integer
//  Output :        Integer
//  Author :        Shreya Pramod Pasalkar
//  Date :          14/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEven = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEven++;
        }
    }

    return iEven;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

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

    iRet = CountEven(p, iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
// Testcases : 
// 
// Input : 5      Input : 2    5   42    6    9               Output : 3
// Input : 3      Input : 10    15    11                      Output : 1
// Input : 6      Input : 11     3    11    4    9    8       Output : 2
//
/////////////////////////////////////////////////////////////////////////////////////////////////