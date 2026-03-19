/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>                                     // For Input Output
#include<stdlib.h>                                    // For Memory Allocation

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FirstOcc
//  Description :   It is used to find first occurence(Index) of the given number in an array
//  Input :         Integer
//  Output :        Integer
//  Author :        Shreya Pramod Pasalkar
//  Date :          14/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int FirstOcc(int Arr[], int iLength , int iNo)
{
    int iCnt = 0, iIndex = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]) == iNo)
        {
            iIndex = iCnt;
        }
    }

    if(iIndex > 0 )
    {
        return iIndex;
    }
    else
    {
        return -1;
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
    int iRet = 0;

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

    iRet = FirstOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First occurence of number is %d",iRet);
    }
    
    free(p);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Testcases : 
// 
// Input : 5  Input : 5   Input : 2    5   42    6    9             Output : First occurence of number is 5
// Input : 3  Input : 13  Input : 10    15    11                    Output : There is no such number
// Input : 6  Input : 11  Input : 11     3    11    4    9    8     Output : First occurence of number is 1
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////