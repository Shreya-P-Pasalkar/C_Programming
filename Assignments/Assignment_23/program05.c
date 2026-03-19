/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>                                     // For Input Output
#include<stdlib.h>                                    // For Memory Allocation

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Product
//  Description :   It is used to find the product of all odd elements
//  Input :         Integer
//  Output :        Integer
//  Author :        Shreya Pramod Pasalkar
//  Date :          14/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 1)
        {
            iMult = iMult * Arr[iCnt];
        }
    }
    
    if(iMult == 1)
    {
        return 0;
    }
    else
    {
        return iMult;
    }

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
    int iRet = 0;

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

    iRet = Product(p, iSize);
    
    printf("Product of all odd numbers is: %d",iRet);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
// Testcases : 
// 
// Input : 5   Input : 2    5   42    6    9            Output : Product of all odd numbers is:45
// Input : 3   Input : 10    15    11                   Output : Product of all odd numbers is:165
// Input : 6   Input : 11     3    11    4    9    8    Output : Product of all odd numbers is:2907
//
/////////////////////////////////////////////////////////////////////////////////////////////////