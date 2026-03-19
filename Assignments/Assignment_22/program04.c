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
//  Description :   It is used to find frequency of 11 in an Array
//  Input :         Integer
//  Output :        Integer
//  Author :        Shreya Pramod Pasalkar
//  Date :          14/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]) == 11)
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
    int iSize = 0, iCnt = 0, iRet =0;
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

    iRet = Frequency(p, iSize);

    printf("Frequency of 11 is %d",iRet);
    
    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
// Testcases : 
// 
// Input : 5      Input : 2    5   42    6    9               Output : Frequency of 11 is 0
// Input : 3      Input : 10    15    11                      Output : Frequency of 11 is 1 
// Input : 6      Input : 11     3    11    4    9    8       Output : Frequency of 11 is 2
//
/////////////////////////////////////////////////////////////////////////////////////////////////