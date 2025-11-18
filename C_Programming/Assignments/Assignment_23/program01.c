/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>                                 // For Input Output
#include<stdlib.h>                                // For Memory Allocation
#define TRUE 1
#define FALSE 0

typedef int BOOL;                                 // For defining integer Datatype as BOOL

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description :   It is used to check if given number is present or not
//  Input :         Integer
//  Output :        Integer (BOOL)
//  Author :        Shreya Pramod Pasalkar
//  Date :          14/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

BOOL Check(int Arr[], int iLength , int iNo)
{
    int iCnt = 0,iCheck = 0;

    for(iCnt = 0; iCnt < iLength , iCheck = 0; iCnt++)
    {
        if((Arr[iCnt]) == iNo)
        {
            iCheck++;
        }
    }

    if(iCheck > 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0,iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter Number of elements:");
    scanf("%d",&iSize);
    printf("Enter Number:");
    scanf("%d",&iValue);

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

    bRet = Check(p, iSize, iValue);

    if(bRet == TRUE)
    {
        printf("%d is present",iValue);
    }
    else
    {
        printf("%d is not present",iValue);
    }
    
    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
// Testcases : 
// 
// Input : 5  Input : 5   Input : 2    5   -42    6    9                Output : 5 is present
// Input : 3  Input : 13  Input : 10    15    11                        Output : 13 is not present
// Input : 6  Input : 11  Input : -11     -3    -11    -4    9    8     Output : 11 is not present
//
/////////////////////////////////////////////////////////////////////////////////////////////////