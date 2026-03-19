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
//  Function Name : Check
//  Description :   It is used to check if 11 is present in the Array or not
//  Input :         Integer
//  Output :        Boolean
//  Author :        Shreya Pramod Pasalkar
//  Date :          14/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

bool Check(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]) == 11)
        {
            return true;
        }
    }

    return false;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;
    bool bRet = false;

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

    bRet = Check(p, iSize);

    if (bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is not present");
    }
    
    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
// Testcases : 
// 
// Input : 5      Input : 2    5   42    6    9               Output : 11 is not present
// Input : 3      Input : 10    15    11                      Output : 11 is present
// Input : 6      Input : 11     3    11    4    9    8       Output : 11 is present
//
/////////////////////////////////////////////////////////////////////////////////////////////////